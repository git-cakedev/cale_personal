/*

// initialize variables
#include <iostream>
#include <string>

int printIntro();
int inNumber;
int primitivity();
int flag;

int main() {

	printIntro();
	primitivity();

}


int printIntro() { // prints the intro and sets the variable to your number

	std::cout << "Welcome to my sick ass program!\n" << "Enter a number to determine if it is prime: ";
	std::cin >> inNumber;
	return 0;
}

int primitivity() {

	for (int i = 2; i <= (inNumber/2); i++) // loop through all numbers less than half your number 
	{
		if (inNumber % i == 0) { // if there is no remainder after dividing your number by the current number then it is not prime
			std::cout << "\nNumber is not prime!\n";
			flag = 1;
			break;
		}

	}
	if (flag == 0) {
	
		std::cout << "\nNumber is prime!\n";
	
	}
	return 0;
}

*/