// Collatz's Hypothesis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//This project is based on Collatz's Hypothesis, which states that if you take any positive integer and apply the given rules, 
// you will eventually reach the number 1:

#include <iostream>

using namespace std;
int main()
{
	int c0;
	int count = 0;

	cout << "Enter a number greater than 0: ";
	cin >> c0;

	while (c0 != 1) {
		if (c0 % 2 == 0) {
			c0 /= 2;
			count++;
			cout << c0 << endl;
		}
		else {
			c0 = 3 * c0 + 1;
			count++;
			cout << c0 << endl;
		}
	}
	cout << "Total number of steps: " << count << endl;
}

