// Just Learnin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*


#include <iostream>

// initialize variables 
int hours = 0;
int minutes = 0;
int total_minutes = 0;

constexpr int BASE_SIXTY = 60;

// declare the functions we will use
void intro();
int minutesCalculation();

// Program entry point, where the compiler starts reading from 
int main()
{
	intro(); // Run the 'intro' function

	minutesCalculation(); // run the 'minutesCalculation' function

	std::cout << "The total minutes is " << total_minutes << ". \n";

	return 0; // Exit the program
}

void intro() { 

	std::cout << "Enter the hours: "; // prints this string to the console
	std::cin >> hours; // waits for user to hit enter after entering their hours, then store that as the variable 'hours'

	std::cout << "\nEnter the minutes: "; // do the same as above, with minutes
	std::cin >> minutes;
}


int minutesCalculation() {

	total_minutes = minutes + (hours * BASE_SIXTY); // calculates how many minutes there are in the original hours AND minute format

	return 0; // exit the function
}

*/