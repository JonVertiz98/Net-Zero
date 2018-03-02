// Jonathan Vertiz
// ITSE 1307
// Net Zero
// NetZero.cpp : Program deciphers if your number is a zero, negative, or positive.
#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	//The one value we'll need is established
	int intUserNumber = 0;

	//Prompt the user to enter in the number
	cout << "Please enter your number: ";
	cin >> intUserNumber;

	//An "if" statement that states if the number is greater than zero then the program returns that it's positive
	if (intUserNumber > 0)
	{
		cout << "Your number " << intUserNumber
			<< " is a positive." << endl;
	}
	//An "if else" statement that states if the number is less than zero then the program returns that it's negative
	else if (intUserNumber < 0)
	{
		cout << "Your number " << intUserNumber
			<< " is a negative." << endl;
	}
	//The else statement that states if the number is zero if it doesn't meet the other criteria
	else
	{
		cout << "Your number is zero " << endl;
	}
    return 0;
}

