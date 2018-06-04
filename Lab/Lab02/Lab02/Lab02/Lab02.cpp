// Lab02.cpp : Defines the entry point for the console application.
// Jason Chan A00698160
// This program prompts for user numberic inputs and continuously adds and display on console

#include "stdafx.h"
#include <iostream>
#include <climits>

using namespace std;

// add function
// to add user input with stored sum
// @param int a user input
// @param int b sum
// @return sum
int add(int a, int b)
{
	return b += a;
}

int main()
{	
	int input;		// to store user input
	int sum = 0;	// to store sum 

	while (cout << "Enter a number: " && !(cin.eof()))				// Loop entry point - prompt input from user
	{
		if (cin >> input) {											// entry point for user input
			sum = add(input, sum);									// call function add
			cout << "The total is: " << sum << endl;				// displays sum
		}
		else {
			cin.clear();											// clear user input
			cin.ignore(numeric_limits<streamsize>::max(), '\n');	// ingore non-numeric input
			cout << "Invalid input!" << endl;						// message display to uesr for invalid input
		}
	}

	system("pause");

    return 0;
}

