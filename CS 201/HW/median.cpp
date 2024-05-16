//Author: Joseph Charles Serrano
//Filename: median.cpp
//Assignment: HW 9

#include <iostream>

using namespace std;

int getSize();
float* arrayFactory(int);
void fillArray(float*, int);
void sortArray(float*, int);
float findMedian(float*, int);
void print(float*, int, float);


int main() {

	int sz = getSize();
	float* arr = arrayFactory(sz);
	fillArray(arr, sz);	
	sortArray(arr, sz);
	float median = findMedian(arr, sz);

	print(arr, sz, median);

	delete arr;
	return 0;
}

int getSize() {
	int n;
	cout << "How many numbers do you want to enter: ";
	cin >> n;
	int* nptr = new int;
	nptr = &n;
	
	if (n <= 0) {
		cout << "Error. You must enter a number greater than 0." << endl;
		getSize();
	}
	else{
		return *nptr;
	}
}

float* arrayFactory(int sz) {

	float* arr = new float[sz];

	return arr;
}

void fillArray(float* arr, int sz) {
	for (int i = 0; i < sz; i++) {
		cout << "Enter number " << i+1 << ": ";
		cin >> arr[i];
	}
}

void sortArray(float* arr, int sz) {
	int startScan, minIndex;
	float minValue;

	for (startScan = 0; startScan < (sz - 1); startScan++) {
		minIndex = startScan;
		minValue = *(arr + startScan);
		for (int index = startScan + 1; index < sz; index++) {
			if (*(arr + index) < minValue) {
				minValue = *(arr + index);
				minIndex = index;
			}
		}
		*(arr + minIndex) = *(arr + startScan);
		*(arr + startScan) = minValue;
	}
}

float findMedian(float* arr, int sz) {
	float median;
	if (sz % 2 == 0) {
		median = (*(arr + (sz/2)) + *(arr + ((sz/2)-1)) )/ 2;
	}
	else {
		median = *(arr + (sz/2));
	}
	return median;
}

void print(float* arr, int sz, float median) {
	cout << "The sorted values are: ";

	for (int i = 0; i < sz; i++)
		cout << *(arr + i) << " ";
	cout << endl;

	cout << "The median value is: " << median;
	
}