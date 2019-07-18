// Title: Cale's Super Awesome Chess
// Author: Cale Maynes - sir-gallahad
// Version: 0.0.1
// Features: 
// Outcomes
// Program Use
#include <iostream>
#include <string>

/*

   A		   B	        C			D			E			F			G		   H
#  #  #		/  /  /		 #  #  #	 /  /  /	 #  #  #	 /  /  /	 #  #  #	/  /  /
#  BR #		/  BK /		 #  BB #	 /  BQ /	 #  BK #	 /  BB /	 #  BK #	/  BR /  VIII
#  #  #		/  /  /		 #  #  #	 /  /  /	 #  #  #	 /  /  /	 #  #  #	/  /  / 

/  /  /		#  #  #		 /  /  /	 #  #  #	 /  /  /	 #  #  #	 /  /  /	#  #  #
/  BP /		#  BP #		 /  BP /	 #  BP #	 /  BP /	 #  BP #	 /  BP /	#  BP #  VII
/  /  /		#  #  #		 /  /  /	 #  #  #	 /  /  /	 #  #  #	 /  /  /	#  #  #

#  #  #		/  /  /		 #  #  #	 /  /  /	 #  #  #	 /  /  /	 #  #  #	/  /  /
#     #		/     /		 #     #	 /     /	 #     #	 /     /	 #     #	/     /  VI
#  #  #		/  /  /		 #  #  #	 /  /  /	 #  #  #	 /  /  /	 #  #  #	/  /  /

/  /  /		#  #  #		 /  /  /	 #  #  #	 /  /  /	 #  #  #	 /  /  /	#  #  #
/     /		#     #		 /     /	 #     #	 /     /	 #     #	 /     /	#     #  V
/  /  /		#  #  #		 /  /  /	 #  #  #	 /  /  /	 #  #  #	 /  /  /	#  #  #

#  #  #		/  /  /		 #  #  #	 /  /  /	 #  #  #	 /  /  /	 #  #  #	/  /  /
#     #		/     /		 #     #	 /     /	 #     #	 /     /	 #     #	/     /  IV
#  #  #		/  /  /		 #  #  #	 /  /  /	 #  #  #	 /  /  /	 #  #  #	/  /  /

/  /  /		#  #  #		 /  /  /	 #  #  #	 /  /  /	 #  #  #	 /  /  /	#  #  #
/     /		#     #		 /     /	 #     #	 /     /	 #     #	 /     /	#     #  III
/  /  /		#  #  #		 /  /  /	 #  #  #	 /  /  /	 #  #  #	 /  /  /	#  #  #

#  #  #		/  /  /		 #  #  #	 /  /  /	 #  #  #	 /  /  /	 #  #  #	/  /  /
#  WP #		/  WP /		 #  WP #	 /  WP /	 #  WP #	 /  WP /	 #  WP #	/  WP /  II
#  #  #		/  /  /		 #  #  #	 /  /  /	 #  #  #	 /  /  /	 #  #  #	/  /  /

/  /  /		#  #  #		 /  /  /	 #  #  #	 /  /  /	 #  #  #	 /  /  /	#  #  #
/  WR /		#  WK #		 /  WB /	 #  WQ #	 /  WK /	 #  WB #	 /  WK /	#  WR #  I
/  /  /		#  #  #		 /  /  /	 #  #  #	 /  /  /	 #  #  #	 /  /  /	#  #  #

*/
void printBoard() {

	std::cout << "   A               B                C               D               E               F               G              H" << std::endl;
	std::cout << std::endl;
	std::cout << "#  #  #		/  /  /		 #  #  #	 /  /  /	 #  #  #	 /  /  /	 #  #  #	/  /  /" << std::endl;
	std::cout << std::endl;
	std::cout << "#     #		/     /		 #     #	 /     /	 #     #	 /     /	 #     #	/     /  VIII" << std::endl;
	std::cout << std::endl;
	std::cout << "#  #  #		/  /  /		 #  #  #	 /  /  /	 #  #  #	 /  /  /	 #  #  #	/  /  /" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "/  /  /		#  #  #		 /  /  /	 #  #  #	 /  /  /	 #  #  #	 /  /  /	#  #  #" << std::endl;
	std::cout << std::endl;
	std::cout << "/     /		#     #		 /     /	 #     #	 /     /	 #     #	 /     /	#     #  VII" << std::endl;
	std::cout << std::endl;
	std::cout << "/  /  /		#  #  #		 /  /  /	 #  #  #	 /  /  /	 #  #  #	 /  /  /	#  #  #" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "#  #  #		/  /  /		 #  #  #	 /  /  /	 #  #  #	 /  /  /	 #  #  #	/  /  /" << std::endl;
	std::cout << std::endl;
	std::cout << "#     #		/     /		 #     #	 /     /	 #     #	 /     /	 #     #	/     /  VI" << std::endl;
	std::cout << std::endl;
	std::cout << "#  #  #		/  /  /		 #  #  #	 /  /  /	 #  #  #	 /  /  /	 #  #  #	/  /  /" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "/  /  /		#  #  #		 /  /  /	 #  #  #	 /  /  /	 #  #  #	 /  /  /	#  #  #" << std::endl;
	std::cout << std::endl;
	std::cout << "/     /		#     #		 /     /	 #     #	 /     /	 #     #	 /     /	#     #  V" << std::endl;
	std::cout << std::endl;
	std::cout << "/  /  /		#  #  #		 /  /  /	 #  #  #	 /  /  /	 #  #  #	 /  /  /	#  #  #" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "#  #  #		/  /  /		 #  #  #	 /  /  /	 #  #  #	 /  /  /	 #  #  #	/  /  /" << std::endl;
	std::cout << std::endl;
	std::cout << "#     #		/     /		 #     #	 /     /	 #     #	 /     /	 #     #	/     /  IV" << std::endl;
	std::cout << std::endl;
	std::cout << "#  #  #		/  /  /		 #  #  #	 /  /  /	 #  #  #	 /  /  /	 #  #  #	/  /  /" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "/  /  /		#  #  #		 /  /  /	 #  #  #	 /  /  /	 #  #  #	 /  /  /	#  #  #" << std::endl;
	std::cout << std::endl;
	std::cout << "/     /		#     #		 /     /	 #     #	 /     /	 #     #	 /     /	#     #  III" << std::endl;
	std::cout << std::endl;
	std::cout << "/  /  /		#  #  #		 /  /  /	 #  #  #	 /  /  /	 #  #  #	 /  /  /	#  #  #" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "#  #  #		/  /  /		 #  #  #	 /  /  /	 #  #  #	 /  /  /	 #  #  #	/  /  /" << std::endl;
	std::cout << std::endl;
	std::cout << "#     #		/     /		 #     #	 /     /	 #     #	 /     /	 #     #	/     /  II" << std::endl;
	std::cout << std::endl;
	std::cout << "#  #  #		/  /  /		 #  #  #	 /  /  /	 #  #  #	 /  /  /	 #  #  #	/  /  /" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "/  /  /		#  #  #		 /  /  /	 #  #  #	 /  /  /	 #  #  #	 /  /  /	#  #  #" << std::endl;
	std::cout << std::endl;
	std::cout << "/     /		#     #		 /     /	 #     #	 /     /	 #     #	 /     /	#     #  I" << std::endl;
	std::cout << std::endl;
	std::cout << "/  /  /		#  #  #		 /  /  /	 #  #  #	 /  /  /	 #  #  #	 /  /  /	#  #  #" << std::endl;
}

public class cPiece() {

	char colour; // B or W
	char pieceType; // Pawn, Rook, kNight, Bishop, Queen, King
	int[2] location; // X (column), Y (Row)

	


}

int main() {

	printBoard();
}
