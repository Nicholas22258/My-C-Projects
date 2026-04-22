// Arithmetic 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//This project is to demonstrate the use of arithmetic operators in C++.

#include <iostream>

using namespace std;
int main()
{
	bool i = false, j;
	j = !!i;
	cout << "i = false, j = !!i = " << j << endl;

	j = &i;
	cout << "i = false, j = &i = " << j << endl;

	j = j || i;
	cout << "i = false, j = ||i = " << j << endl;

	cout << "-----------------------------------------------------------------------------" << endl;

	int m = 22, n = 15, l;
	cout << "m = 22, n = 15" << endl;

	l = m & n;
	cout << "m & n = " << l << endl;

	l = !n;
	cout << "!n = " << l << endl;

	l = ~n;
	cout << "~n = " << l << endl;

	cout << "-----------------------------------------------------------------------------" << endl;

	int geSigned = -8, var_s;
	unsigned geUnsigned = 24, var_u;

	var_s = geSigned >> 1;//divides by 2
	cout << "-8 >> 1 = " << var_s << endl;

	var_s = geSigned << 2;//multiplies by 4
	cout << "-8 >> 2 = " << var_s << endl;

	var_u = geUnsigned >> 2;//divides by 4
	cout << "24 >> 2 = " << var_u << endl;

	var_u = geUnsigned << 1;//divides by 2
	cout << "24 >> 1 = " << var_u << endl;

	cout << "-----------------------------------------------------------------------------" << endl;

}

