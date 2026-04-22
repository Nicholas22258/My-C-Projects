// Times and Durations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//This project takes the current time in hours and minutes, and a number of minutes to go ahead. 
// It then calculates the new time after adding the specified number of minutes to the current time.

#include <iostream>

using namespace std;
int main()
{
	struct TIME {
		int hours;
		int minutes;
	} time;

	int hour, minutes, timeAhead;
	//struct TIME time;
	bool validInput1, validInput2;

	cout << "Enter hours: " << endl;
	cin >> hour;
	if (hour < 24 && hour > -1) {
		time.hours = hour;
		validInput1 = true;
	}
	else {
		cout << "Invalid hour input." << endl;
		return 1;
	}


	cout << "Enter minutes: " << endl;
	cin >> minutes;
	if (minutes < 61 && minutes > -1) {
		time.minutes = minutes;
		validInput2 = true;
	}
	else {
		cout << "Invalid minutes input." << endl;
		return 1;
	}

	cout << "Enter minutes to go ahead: " << endl;
	cin >> timeAhead;

	if (validInput1 && validInput2) {
		int hoursToAdd = timeAhead / 60;
		int minutesToAdd = timeAhead % 60;

		int totalMinutes = time.hours * 60 + time.minutes + timeAhead;

		time.hours = (totalMinutes / 60) % 24;
		time.minutes = totalMinutes % 60;

		cout << "New time is: " << time.hours << ":" << time.minutes << endl;
	}

	return 0;
}


