// Day02exercise.cpp : Defines the entry point for the console application.
//1. Write a function called fibonacci that accepts an integer n
//and returns the nth fibonacci number.
//2. Write a function called shift that accepts two integers and a
//boolean.If the boolean is true, bitwise shift the first integer
//LEFT the number of bits specified by the second integer.If
//the boolean is false, bitwise shift the first integer RIGHT.
//3. CHALLENGE: Write a function called isPrime that accepts an
//integer and returns true if it is prime and false if it is not
//prime.
//4. Test your code by invoking the functions from the main
//method.Are there any restrictions for using your functions ?

#include "stdafx.h"
#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
	int function;

	cout << "Please choose one of the function:\n" << "Fibonacci (1), Shift (2), isPrime? (3)" << endl;
	cin >> function;

	if (function == 1) {
		int input;
		cout << "Enter a number: " << endl;
		cin >> input;

		cout << "Fibonacci number is: " << fibonacci(input) << endl;
	}

	if (function == 2) {
		int a;
		int b;
		bool shift_left;
		char input;

		cout << "Enter your first number: " << endl;
		cin >> a;
		cout << "Enter your second number: " << endl;
		cin >> b;
		cout << "Would you like to shift left? (y/n)" << endl;
		cin >> input;

		if (input == 'y') {
			shift_left = true;
		}
		else {
			shift_left = false;
		}

		cout << "Shift function result: " << shift(a, b, shift_left) << endl;

	}

	if (function == 3) {
		int a;
		cout << "Enter a number: " << endl;
		cin >> a;

		if (isPrime(a)) {
			cout << a << " is a prime number" << endl;
		}
		else {
			cout << a << " is not a prime number" << endl;
		}
	}
	
	system("pause");
    return 0;
}

