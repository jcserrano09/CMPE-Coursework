//Author: Joseph Charles Serrano
//Filename: lowestScoreDrop.cpp
//Assignment Assignment #6

#include <iostream>
#include <iomanip>
using namespace std;

void getScore(int &);
void calcAverage(double, double, double, double, double);
int findLowest(double, double, double, double, double);

int main() {

	int a, b, c, d, e;
	getScore(a);
	getScore(b);
	getScore(c);
	getScore(d);
	getScore(e);
	calcAverage(a, b, c, d, e);

	return 0;
}

void getScore(int &score) {
	cout << "Enter the test score: ";
	cin >> score;
	while (score > 100 || score < 0) {
		cout << "Error: invalid test score.\n" <<
				"Scores must be from 0 through 100." << endl;
		cout << "Enter the test score: ";
		cin >> score;
	}
}

int findLowest(double s1, double s2, double s3, double s4, double s5) {
	double lowest;
	lowest = s1;
	if (s2 < lowest)
		lowest = s2;
	if (s3 < lowest)
		lowest = s3;
	if (s4 < lowest)
		lowest = s4;
	if (s5 < lowest)
		lowest = s5;

	return lowest;
}

void calcAverage(double s1, double s2, double s3, double s4, double s5) {
	double lowest = findLowest(s1, s2, s3, s4, s5);
	cout << fixed << setprecision(1);

	double average;
	average = ((s1 + s2 + s3 + s4 + s5) - lowest) / 4.0;
	cout << "The average is " << average << endl;
}