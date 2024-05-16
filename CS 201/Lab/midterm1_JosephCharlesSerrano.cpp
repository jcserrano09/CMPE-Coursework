//Author: Joseph Charles Serrano
//Filename: midterm1_JosephCharlesSerrano.cpp
//Assignment: Midterm 1

#include <iostream>
#include <iomanip>
using namespace std;

int drawX(int);
int drawTriangle(int);
void getNextNumber();
int getRefinedAverage(int);

int main() {
	//Subtask 1
	int dim;
	cout << "Please enter the dimension of the pattern: ";
	cin >> dim;
	drawX(dim);
	cout << endl;
	drawTriangle(dim);
	cout << endl;

	//Subtask 2 (confused with task)

	getNextNumber();

}
//SubTask 1 Function Definitionss
int drawX(int dim) {
	for (int r = 0; r <= dim; r++) {
		for (int c = 1; c <= dim; c++) {
			if (r == c || c == (dim+1) - r)
				cout << '*';
			else
				cout << " ";
		}
		cout << endl;
	}
	return dim;
}
int drawTriangle(int dim) {
	for (int b = dim; b >= 1; b--) {
		for (int a = dim - b; a > 0; a--) {
			cout << " ";
		}
		for (int i = b; i > 0; i--) {
			cout << "* ";
		}
		cout << endl;
	}
	return dim;
}
//SubTask 2 Function Definitions
void getNextNumber() {
	int items;
	cout << "Please enter the number of items: ";
	cin >> items;
	getRefinedAverage(items);
}

int getRefinedAverage(int items) {
	int max, min, input;
	float ravg;
	float sum = 0;
	max = 0;
	min = 0;
	while (items--) {
		cin >> input;
		if (input > 100 || input < 1) {
			cout << "Invalid item numbers " << endl;
			break;
		}
		else {
			if (input < min || min == 0)
				min = input;
			if (input > max)
				max = input;
		}
		sum += input;		
	}

	cout << fixed << setprecision(2);
	int x = (2 - items);
	ravg = (sum - min - max)/x;
	cout << "Refined Average is: " << ravg;

	return ravg;
}