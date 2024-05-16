//Author: Joseph Charles Serrano
//Filename: average.cpp
//Assignment: HW03

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

	string monthOne, monthTwo, monthThree;
	double rainOne, rainTwo, rainThree, avg;

	cout << "Enter the name and rainfall amount for month 1: ";
	cin >> monthOne >> rainOne;

	cout << "Enter the name and rainfall amount for month 2: ";
	cin >> monthTwo >> rainTwo;

	cout << "Enter the name and rainfall amount for month 3: ";
	cin >> monthThree >> rainThree;

	avg = (rainOne + rainTwo + rainThree) / 3;

	cout << setprecision(2) << fixed;

	cout << "The average rainfall for " << monthOne << ", " << monthTwo << ", and " << monthThree 
		<< " is " << avg << " inches." << endl;

	return(0);
}