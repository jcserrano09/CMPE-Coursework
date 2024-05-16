//Author: Joseph Charles Serrano
//Filename: sorting.cpp
//Assignment: HW#7

#include <iostream>
using namespace std;

void fillArray(float [], int);
void sortArray(float [], int);
void printArray(float[], int);

int main() {
	float arr[5];
	const int SIZE = 5;

	fillArray(arr, SIZE);
	sortArray(arr, SIZE);
	printArray(arr, SIZE);
}

void fillArray(float arr[], int size) {

	cout << "Enter " << size << " numbers: \n\n";

	for (int i = 0; i < size; i++) {
		cout << "Enter number " << i+1 <<": ";
		cin >> arr[i];
	}

}

void sortArray(float arr[], int size) { // selection sort
	int startScan, minIndex; 
	float minValue;

	for (startScan = 0; startScan < (size - 1); startScan++) {
		minIndex = startScan;
		minValue = arr[startScan];
		for (int index = startScan + 1; index < size; index++) {
			if (arr[index] < minValue) {
				minValue = arr[index];
				minIndex = index;
			}
		}
		arr[minIndex] = arr[startScan];
		arr[startScan] = minValue;
	}
}

void printArray(float arr[], int size) {
	for (int i = 0; i < size; i++)
		cout << " " << arr[i];
	cout << endl;
}
