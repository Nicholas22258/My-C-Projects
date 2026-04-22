// Fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//This project calculates the Fibonacci secuence to the number of times the user wants it to be calculated.

#include <iostream>

using namespace std;
int main()
{
    void fibonacci(int num);

	int num;
	cout << "Please enter a number: ";
	cin >> num;

	fibonacci(num);
}

void fibonacci(int num) { //1, 1, 2, 3, 5, 8, 13, ...
	int i = 0;
	long temp1 = 0, temp2 = 1, total;

	while (i <= num) {
		total = temp1 + temp2;
		temp1 = temp2;
		temp2 = total;
		cout << total << endl;
		i++;
	}
}
