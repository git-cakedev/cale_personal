#NoEnv  ; Recommended for performance and compatibility with future AutoHotkey releases.
; #Warn  ; Enable warnings to assist with detecting common errors.
SendMode Input  ; Recommended for new scripts due to its superior speed and reliability.
SetWorkingDir %A_ScriptDir%  ; Ensures a consistent starting directory. 
CoordMode, Mouse , Client
SetTitleMatchMode,2

trimPath := ""

If FileExist("P:\Land\KOFAX\Cale's Folder\GROUNDBIRCH SURFACE FILES (Didn't send to WC)\39705 (S00338)\*pdf")
{
    ; loop through those files  
    Loop, Files, P:\Land\KOFAX\Cale's Folder\GROUNDBIRCH SURFACE FILES (Didn't send to WC)\39705 (S00338)\*pdf
    {
        If (A_Index = 1) ; as soon as the first file (in alphanumeric order) is retrieved
            fullPath := A_LoopFileFullPath ; set the directory var
            trimPath := SubStr(fullPath, 75) ; set the trimmed directory var **75 for grndbrch, 79 for kobes
                break ; and terminate the loop
    }
}
else
{
    MsgBox, "directory" doesn't contain any pdf-files!}
}

landType := "SURFACE"

category := "" ;search for s or p
categoryChar := SubStr(trimPath, 8 , 1)

	if (categoryChar = "S" or "P") ;maybe use InStr
	{
		if (categoryChar = "S")
		{
			category := "SURFACE"
		}
		else if (categoryChar = "P")
		{
			category := "PIPELINE"
		} 
	}
	else
	{
		MsgBox, "categoryChar unable to init"
	}

docType := ""
docTypeIndex := SubStr(trimPath, -6, 3)
	if (docTypeIndex = "ACQ" or "AMD")
	{
		docType = GOVERNING DOCUMENTS
	}
	else if (docTypeIndex = "COR" or "REG")
	{
		docType := CORRESPONDENCE
	}
	else if (docTypeIndex = "LET" or "TAK")
	{
		docType := ACCESS
	}
	else if (docTypeIndex = "LTO")
	{
		docType := TITLE SEARCH POINT
	}
	else if (docTypeIndex = "SUR")
	{
		docType := SURVEY
	}
	else if (docTypeIndex = "ENV")
	{
		docType := SUPPORTING DOCUMENTS
	}
	else
	{
		MsgBox, "doctype unable to init"
		Pause
		exit
	}


fileNumLB := InStr(trimPath, "(")
fileNumRB := InStr(trimPath, ")")
fileNum := SubStr(trimPath, fileNumLB + 1 , fileNumRB - fileNumLB - 1)

docDate := "01/01/9999"

boxNum := "ELECTRONIC"

description := "SUNCOR FILE " SubStr(trimPath, 1, 5) " - " docTypeIndex 

comment := "SUNCOR ACQUISITION"


If (WinExist("ahk_class Ops"))
{

WinActivate, Kofax Capture Batch Manager ahk_class Ops



Sleep, 333
Send, ^n
WinActivate, Create Batch ahk_class #32770
Sleep, 333
Click, 136, 108
Sleep, 10
Send, {C}{M}{S}{E}{I}{Enter}
Sleep, 10
WinClose, Create Batch ahk_class #32770

WinActivate, Kofax Capture Batch Manager ahk_class Ops
Sleep, 10
Send, ^r

WinWaitActive, ahk_class scan
WinActivate, ahk_class scan
Sleep, 333
Send, ^t

WinWaitActive, Import ahk_class #32770
WinActivate, Import ahk_class #32770
Sleep, 333
Click, 293, 66
Sleep, 10
Click, 293, 66
Sleep, 10
Click, 167, 426
Sleep, 10
Send, {LControl Down}{c}{LControl Up}
Click, 362, 432
Sleep, 10
Click, 504, 336
Sleep, 10

Loop
{
	If WinExist(ahk_class scan)
		Send, ^l
		Sleep, 10
		Send, {Enter}
		Sleep, 10
	IfWinNotExist, ahk_class scan
		Break
}

WinWaitClose, ahk_class scan
WinActivate, Kofax Capture Batch Manager ahk_class Ops
Sleep, 10
Send, ^r
WinWaitActive, ahk_class WindowsForms10.Window.8.app.0.141b42a_r16_ad1
Sleep, 10
WinActivate, SplashForm ahk_class WindowsForms10.Window.8.app.0.141b42a_r16_ad1
Sleep, 10
WinActivate, Kofax Capture Recognition Server ahk_class WindowsForms10.Window.8.app.0.141b42a_r16_ad1
Sleep, 10
WinWaitActive, ahk_class WindowsForms10.Window.8.app.0.141b42a_r16_ad1
Sleep, 10
WinWaitClose, ahk_class WindowsForms10.Window.8.app.0.141b42a_r16_ad1
WinWaitClose, Kofax Capture Recognition Server ahk_class WindowsForms10.Window.8.app.0.141b42a_r16_ad1
Sleep, 10

WinActivate, Kofax Capture Batch Manager ahk_class Ops
Sleep, 20
Send, Enter
Send, ^r
Sleep, 5000

qcvar := 0

If WinExist("Kofax Capture Quality Control")
{
	qcvar := 1
	Sleep, 500
	Send, ^+r
	Sleep, 10
	Send, {Enter}
	Sleep, 10
	Send, ^l
	Send, {Enter}
	WinWaitClose, "Kofax Capture Quality Control"
}

If qcvar = 1 
{
	WinActivate, ahk_class Ops
	Sleep, 500
	Send, ^r
	qcvar := 0
}


Sleep, 6000
WinActivate, Kofax Capture Batch Manager ahk_class Ops
Send, ^r

Loop
{
	If WinExist(ahk_class index)
		Break
	IfWinNotExist, ahk_class index
		Sleep, 10
}


WinActivate, ahk_class index
Sleep, 1000
/*ControlSetText, Edit1, %landType% , ahk_class index,
ControlSetText, Edit2, %category% , ahk_class index,
ControlSetText, Edit3, %docType% , ahk_class index,
ControlSetText, Edit4, %fileNum% , ahk_class index,
ControlSetText, Edit5, %docDate% , ahk_class index,
ControlSetText, Edit7, %boxNum% , ahk_class index,
ControlSetText, Edit8, %description% , ahk_class index,
ControlSetText, Edit9, %comment% , ahk_class index,
*/

Click, 60, 201
Sleep, 10
Send, %landType%{Tab}
Send, %category%{Tab}
Send, %docType%{Tab}
Send, %fileNum%{Tab}
Send, %docDate%{Tab}
Send, %boxNum%{Tab}
Send, %description%{Tab}
Send, %comment%{Tab}

Sleep, 10000
Send, ^l
Sleep, 10
Send, {Enter}
Sleep, 10
Send, {Enter}
Sleep, 333
WinActivate, Kofax Capture Batch Manager ahk_class Ops
Sleep, 2000
Send, ^r
Sleep, 2000
Send, ^r
exit

}
else 
{
	MsgBox, kofax not open!
}

ListVars
pause
Exit