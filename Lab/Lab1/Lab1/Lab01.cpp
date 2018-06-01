// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <climits>
#include <iostream>

using namespace std;

int main()
{
	cout << "Type" << "\t\t\t|\t" << "Size (B)" << "\t|\t" << "Minimum Value" << "\t  |\t" << "Maximum Value" << "\t  |" << endl;
	cout << "--------------------------------------------------------------------------------------------------" << endl;

	cout << "bool" << "\t\t\t|\t    " << sizeof(bool)
	<< "\t\t|\t     " << numeric_limits<bool>::min()
	<< "\t\t  |\t     " << numeric_limits<bool>::max() << "\t\t  |" << endl;

	cout << "short int" << "\t\t|\t    " << sizeof(short int)
	<< "\t\t| \t " << numeric_limits<short int>::min()
	<< "\t\t  | \t  " << numeric_limits<short int>::max() << "\t\t  |" << endl;
	
	cout << "unsigned short int" << "\t|\t    " << sizeof(unsigned short int)
	<< "\t\t|\t     " << numeric_limits<unsigned short int>::min()
	<< "\t\t  |\t  " << numeric_limits<unsigned short int>::max() << "\t\t  |" << endl;

	cout << "int" << "\t\t\t|\t    " << sizeof(int)
	<< "\t\t|\t " << numeric_limits<int>::min()
	<< "\t  |\t " << numeric_limits<int>::max() << "\t  |" << endl;
	
	cout << "unsigned int" << "\t\t|\t    " << sizeof(unsigned int)
	<< "\t\t|\t     " << numeric_limits<unsigned int>::min()
	<< "\t\t  |\t " << numeric_limits<unsigned int>::max() << "\t  |" << endl;
	
	cout << "long int" << "\t\t|\t    " << sizeof(long int)
	<< "\t\t|\t " << numeric_limits<long int>::min()
	<< "\t  |\t " << numeric_limits < long int > ::max() << "\t  |" << endl;
	
	cout << "unsigned long int" << "\t|\t    " << sizeof(unsigned long int)
	<< "\t\t|\t     " << numeric_limits<unsigned long int>::min()
	<< "\t\t  |\t " << numeric_limits<unsigned long int>::max() << "\t  |" << endl;
	
	cout << "long long int" << "\t\t|\t    " << sizeof(long long int)
	<< "\t\t|  " << numeric_limits<long long int>::min()
	<< "\t  |  " << numeric_limits<long long int>::max() << "  |" << endl;
	
	cout << "unsigned long long int" << "\t|\t    " << sizeof(unsigned long long int)
	<< "\t\t|\t     " << numeric_limits<unsigned long long int>::min()
	<< "\t\t  | " << numeric_limits<unsigned long long int>::max() << "  |" << endl;

	cout << "float" << "\t\t\t|\t    " << sizeof(float)
	<< "\t\t|\t " << numeric_limits<float>::min()
	<< "\t  |\t " << numeric_limits<float>::max() << "\t  |" << endl;

	cout << "double" << "\t\t\t|\t    " << sizeof(double)
	<< "\t\t|\t " << numeric_limits<double>::min()
	<< "\t  |\t " << numeric_limits<double>::max() << "\t  |" << endl;

	cout << "long double" << "\t\t|\t    " << sizeof(long double)
	<< "\t\t|\t " << numeric_limits<long double>::min()
	<< "\t  |\t " << numeric_limits<long double>::max() << "\t  |" << endl;

	cout << "char" << "\t\t\t|\t    " << sizeof(char)
	<< "\t\t|\t  " << (int)numeric_limits<char>::min()
	<< "\t\t  |\t    " << (int)numeric_limits<char>::max() << "\t\t  |" << endl;

	cout << "unsigned char" << "\t\t|\t    " << sizeof(unsigned char)
	<< "\t\t|\t     " << (int)numeric_limits<unsigned char>::min()
	<< "\t\t  |\t    " << (int)numeric_limits<unsigned char>::max() << "\t\t  |" << endl;

	cout << "--------------------------------------------------------------------------------------------------" << endl;

	system("pause");
	return 0;
}

