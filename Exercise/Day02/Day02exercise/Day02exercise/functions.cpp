#include "stdafx.h"
#include "functions.h"
#define MAX_DIVISIBLE_NUMBER 2

//fibonacci function
int fibonacci(int x) {
	if (x == 1 | x == 2) {
		return 1;
	}
	else {
		return fibonacci(x - 1) + fibonacci(x - 2);
	}
}

//shift function
//int a
//int b
//bool shift_left
int shift(int a, int b, bool shift_left) {
	if (shift_left == true) {
		return a >>= b;
	}
	else {
		return a <<= b;
	}
}


//isPrime function
bool isPrime(int input) {
	int count = 0;
	for (int a = 1; a <= input; a++) {
		if (input%a == 0) {
			count++;
		}
	}
	if (count == MAX_DIVISIBLE_NUMBER) {
		return true;
	}
	else {
		return false;
	}
}

