// hw1.cpp : A program that prompts a user for a base and an exponent and returns the base to the power of the exponent
// then prompts the user for a base and a results and returns the exponent that would create that result with the base.
//
// Alie Boon-Dooley
// CSPC 5041 Computer System Principles I 


#include <iostream>

using namespace std;

/**
* The power function returns a number raised to an exponent, using multiplication in a loop.
*/
int power(int num, int exp) {
	int final = num;
	
	if (exp < 0) { return 0; }
	if (exp == 0) { return 1; }

	for (int i = 0; i < exp - 1; i++) {
		final *= num;
	}
	return final;
}

/* 
* The myLog() function uses the power() function return the log of a base and a number. A 'guess and check' method is used to assess whether the log has been reached. 
It iterates through numbers, starting at 1, and tests whether the number has been reached, with the power function. 
When the number has been passed, the number of loops, minus one, is returned
*/
int myLog(int base, int num) {
	int count = 0;
	int result = 0;

	if (num == 1) { return count; }

	while (result <= num) {
		result = power(base, ++count);
	}
	return --count;
}

int main()
{
	//vars
	int base = 0;
	int exponent = 0;
	int number = 0;

	// Exponent
	cout << "Enter a base: ";
	cin >> base;
	cout << endl;
	cout << "Enter an exponent: ";
	cin >> exponent;
	cout << endl;
	cout << base << " to the " << exponent << " is " << power(base, exponent) << endl;

	// Logarithm
	cout << "Enter a base: ";
	cin >> base;
	cout << endl;
	cout << "Enter a number: ";
	cin >> number;
	cout << endl;
	cout << "Log of " << number << " in base " << base << " is " << myLog(base, number) << endl;
	return 0;
}
