// Right Shift Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//This project takes an array and shifts the values to the right. The last value is moved to the front of the array.

#include <iostream>

using namespace std;
int main()
{
	int vector1[7] = { 4, 7, 2, 8, 1, 3, 0 };
	int vector2[7];

	// Insert your code here

	for (int j = 0; j < sizeof(vector1); j++) {
		vector2[j] = vector1[6 - j];
	}

	for (int i = 0; i < 7; i++) {
		cout << vector2[i] << ' ';
	}
	cout << endl;
}

