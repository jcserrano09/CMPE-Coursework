//Author: Joseph Charles Serrano
//Filename: globalWarming.cpp
//Assignment: HW 11

#include <iostream>
#include <iomanip>

using namespace std;

struct Climate 
{
	int year;
	double ppm;  // C02 level
	double agta; // Average global temperature anomaly
};

void printOne(Climate);
void printAll(Climate[], int);
Climate findMaxC02(Climate[], int);
Climate findLowTempuratures(Climate[], int);


int main() {
	const int SZ = 10;
	Climate C02years[SZ] = {
		{2021,415,0.98},
		{2020,412.5,0.95},
		{2019,410.5,0.82},
		{2018,409.92,0.91},
		{2017,405,0.91},
		{2016,403.3,0.99},
		{2015,400,0.93},
		{2014,397.2,0.74},
		{2013,395.3,0.67},
		{2012,394.06,0.64}
	};

	printAll(C02years, SZ);

	cout << "Year with highest C02 level: " << endl;
	Climate maxPPM = findMaxC02(C02years, SZ);
	printOne(maxPPM);

	cout << "Year with lowest global average temperatures anomaly: " << endl;
	Climate minAGTA = findLowTempuratures(C02years, SZ);
	printOne(minAGTA);

	return 0;
}

void printOne(Climate c) {
	cout << fixed << showpoint << setprecision(1);
	cout << left << setw(10) << "Year:" << right << setw(10) << c.year << endl;
	cout << left << setw(10) << "C02(ppm):" << right << setw(10) << c.ppm << endl;
	cout << left << setw(10) << "AGTA(C):" << right << setw(10) << c.agta << endl;
}

void printAll(Climate c[], int sz) {

	cout << left << setw(10) << "Year" << right << setw(10) << "C02(ppm)" << setw(10) << "AGTA(C)" << endl;
	cout << fixed << showpoint << setprecision(1);

	for (int index = 0; index < sz; index++) {
		cout << left << setw(10) << c[index].year 
			 << right << setw(10) << c[index].ppm << setw(10) << c[index].agta << endl;
	}

}

Climate findMaxC02(Climate c[], int sz) {

	for (int index = 0; index < sz; index++) {
		if (c[0].ppm < c[index].ppm){
			c[0] = c[index];
		}
	}
	return c[0];
}

Climate findLowTempuratures(Climate c[], int sz) {

	for (int index = 0; index < sz; index++) {
		if (c[0].agta > c[index].agta) {
			c[0] = c[index];
		}
	}
	return c[0];
}


