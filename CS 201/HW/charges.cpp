//Author: Joseph Charles Serrano
//Filename: charges.cpp
//Assignment: HW 4

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float sTime;
	double minutes, charge;
	double RATE1, RATE2, RATE3;
	RATE1 = 0.05;
	RATE2 = 0.45;
	RATE3 = 0.20;

	cout << setprecision(2) << fixed;

	cout << "Enter the starting time of the call: ";
	cin >> sTime;
	cout << "Enter the minutes of the call: ";
	cin >> minutes;

	if (sTime >= 00.00 && sTime <= 06.59)
		charge = minutes * RATE1;

	else if (sTime >= 07.00 && sTime <= 19.00)
		charge = minutes * RATE2;

	else if (sTime >= 19.01 && sTime <= 23.59)
		charge = minutes * RATE3;

	cout << "Your call charges: " << charge;

	return 0;
}