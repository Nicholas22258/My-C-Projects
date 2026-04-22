// Zeller's congruence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//This project uses Zeller's congruence to determine the day of the week for a given date. 
// The user is prompted to enter a year, month, and day, and the program checks if the input is valid before calculating and displaying the corresponding day of the week.

#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;
int main()
{
    void checkDay(int year, int month, int day);
    bool isValidMonth(int month);
    bool isValidDay(int month, int day);

	int year, month, day;

	cout << "Enter year: ";
	cin >> year;
	cout << "Enter month (1-12): ";
	cin >> month;
	cout << "Enter day (1 - 28 or 1 - 30 or 1 - 31): ";
	cin >> day;

	checkDay(year, month, day);
}

void checkDay(int year, int month, int day) {
	if (isValidMonth(month)) {
		if (isValidDay(month, day)) {
			month -= 2;

			if (month < 0) {
				month += 12;
				year--;
			}

			month = (month * 83) / 32;

			month += day;

			month += year;

			month += year / 4;

			month -= year / 100;

			month += year / 400;

			int remainder = month % 7;

			switch (remainder) {
			case 0: {
				cout << "The day is a Sunday." << endl;
				break;
			}
			case 1: {
				cout << "The day is a Monday." << endl;
				break;
			}
			case 2: {
				cout << "The day is a Tuesday." << endl;
				break;
			}
			case 3: {
				cout << "The day is a Wednesday." << endl;
				break;
			}
			case 4: {
				cout << "The day is a Thursday." << endl;
				break;
			}
			case 5: {
				cout << "The day is a Friday." << endl;
				break;
			}
			case 6: {
				cout << "The day is a Saturday." << endl;
				break;
			}
			}
		}
	}
}

bool isValidMonth(int month) {
	if (month > 0 && month < 13) {
		return true;
	}
	return false;
}

bool isValidDay(int month, int day) {
	int shortMonths[] = { 4, 6, 9, 11 };
	int longMonths[] = { 1, 3, 5, 7, 8, 10, 12 };

	int* endPtr = end(shortMonths);
	int* found = find(begin(shortMonths), endPtr, month);

	int* endPtr2 = end(longMonths);
	int* found2 = find(begin(longMonths), endPtr2, month);

	if (month == 2) {
		if (day > 0 && day < 29) {
			return true;
		}
	}
	else if (endPtr != found) {
		if (day > 0 && day < 31) {
			return true;
		}
	}
	else if (endPtr2 != found2) {
		if (day > 0 && day < 32) {
			return true;
		}
	}
	else {
		return false;
	}
}

