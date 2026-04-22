// Binary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//This project takes a number as input and converts it to binary. It also counts the number of 1s in the binary representation.

#include <iostream>

using namespace std;
int main()
{
	unsigned int num;
	int counter = 0, originalNum;
	string bin = "";

	cout << "Enter a number: " << endl;
	cin >> num;

	originalNum = num;
	cout << originalNum << endl;

	while (num > 0) {
		int remainder = num & 1;//equivalent to num % 2

		bin += (remainder == 0) ? '0' : '1';
		if (remainder == 1) {
			counter++;
		}

		num >>= 1;
	}

	cout << "Binary representation: " << bin << endl;
	cout << "Number of 1s: " << counter << endl; */
}

