//Author: Joseph Charles Serrano
//Filename: woof.cpp
//Assignment: HW #5

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

	int num, sum, count;
	double avg;

	ifstream inputFile;
	string fileName;

	cout << "Enter the file name: ";
	cin >> fileName;

	inputFile.open(fileName);
	
	count = 0;
	sum = 0;

	if (inputFile) {
		while (inputFile >> num) {
			count++;
			sum += count;
		}

		cout << setprecision(4) << fixed;

		cout << "Total Numbers: " << count << endl;
		cout << "The sum: " << sum << endl;

		avg = sum / count;
		cout << "The average: " << avg << endl;

		inputFile.close();
	}

	else 
		cout << "Error opening file!";


	return 0;
}
