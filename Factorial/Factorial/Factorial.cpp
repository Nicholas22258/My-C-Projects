// Factorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//This project calculates the factorial of a number. 

#include <iostream>

using namespace std;
int main()
{
    void factorial(int num);
    
	int num;
	cout << "Please enter a number: ";
	cin >> num;

	factorial(num);
}

void factorial(int num) {
	long total = num;

	for (int i = num - 1; i > 0; i--) {
		total *= i;
	}
	cout << num << "! = " << total << endl;
}

