// Lab01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <limits>
#include <iostream>

using namespace std;

int main()
{
	cout << "Type" << "\t\t\t|" << " Size(B) " << "\t|" << " Min Value " << "\t|" << " Max Value " << endl;
	cout << "============================================================" << endl;
	cout << "Bool " << "\t\t\t| " << sizeof(bool)
		<< "\t  | " << numeric_limits<bool>::min()
		<< "\t      | " << numeric_limits<bool>::max() << endl;

	cout << "Short Int" << "\t\t| " << sizeof(short int)
		<< "\t  |" << numeric_limits<short int>::min()
		<< "     | " << numeric_limits<short int>::max() << endl;

	cout << "int: " << "\t\t\t| " << sizeof(int)
		<< "\t  |" << numeric_limits<int>::min()
		<< "|" << numeric_limits<int>::max() << endl;

	cout << "unsigned int: " << "\t\t| " << sizeof(unsigned int)
		<< "\t  | " << numeric_limits<unsigned int>::min()
		<< "\t      | " << numeric_limits<unsigned int>::max() << endl;

	cout << "long int: " << "\t\t| " << sizeof(long int)
		<< "\t\t  |" << numeric_limits<long int>::min()
		<< "|" << numeric_limits<long int>::max() << endl;

	cout << "unsigned long int: " << "\t| " << sizeof(unsigned long int)
		<< "\t  |" << numeric_limits<unsigned long int>::min()
		<< "|" << numeric_limits<unsigned long int>::max() << endl;

	cout << "long long int: " << "\t\t| " << sizeof(long long int)
		<< "\t  |" << numeric_limits<long long int>::min()
		<< "|" << numeric_limits<long long int>::max() << endl;

	cout << "unsigned long long int: " << "| " << sizeof(unsigned long long int)
		<< "\t  |" << numeric_limits<unsigned long long int>::min()
		<< "|" << numeric_limits<unsigned long long int>::max() << endl;

	cout << "float: " << "\t\t\t| " << sizeof(float)
		<< "\t  |" << numeric_limits<float>::min()
		<< "|" << numeric_limits<float>::max() << endl;

	cout << "double: " << "\t\t| " << sizeof(double)
		<< "\t  |" << numeric_limits<double>::min()
		<< "|" << numeric_limits<double>::max() << endl;

	cout << "long double: " << "\t\t| " << sizeof(long double)
		<< "\t  |" << numeric_limits<long double>::min()
		<< "|" << numeric_limits<long double>::max() << endl;

	cout << "char: " << "\t\t\t| " << sizeof(char)
		<< "\t  |" << (int)numeric_limits<char>::min()
		<< "|" << (int)numeric_limits<char>::max() << endl;

	cout << "unsigned char: " << "\t\t| " << sizeof(unsigned char)
		<< "\t  |" << (int)numeric_limits<unsigned char>::min()
		<< "|" << (int)numeric_limits<unsigned char>::max() << endl;

	system("pause");
	return 0;
}

