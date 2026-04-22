// Means.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//This project calculates the various means of a vector of numbers.

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double vector[] = { 1., 2., 3., 4., 5. };
	int n = sizeof(vector) / sizeof(vector[0]);
	double ArithmeticMean = 0.0;
	double HarmonicMean = 0.0;
	double GeometricMean = 1.0;
	double RootMeanSquare = 0.0;

	for (int i = 0; i < n; i++) {
		ArithmeticMean += vector[i];
	}
	ArithmeticMean /= n;

	for (int i = 0; i < n; i++) {
		HarmonicMean += (1.0 / vector[i]);
	}
	HarmonicMean = n / HarmonicMean;

	for (int i = 0; i < n; i++) {
		GeometricMean *= vector[i];
	}
	GeometricMean = pow(GeometricMean, (1.0 / n));

	double sumOfSquares = 0.0;
	for (int i = 0; i < n; i++) {
		RootMeanSquare += pow(vector[i], 2);
	}
	RootMeanSquare = sqrt(RootMeanSquare / n);

	cout << "Arithmetic Mean = " << ArithmeticMean << endl;
	cout << "Harmonic Mean   = " << HarmonicMean << endl;
	cout << "Geometric Mean  = " << GeometricMean << endl;
	cout << "RootMean Square = " << RootMeanSquare << endl;

	cout << endl;
}
