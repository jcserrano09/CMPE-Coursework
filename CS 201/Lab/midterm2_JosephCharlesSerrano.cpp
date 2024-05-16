//Author: Joseph Charles Serrano
//Filename: midterm2_JosephCharlesSerrano.cpp
//Assignment: Midterm 2

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void mathSeries(int, int, int);
void generate_array(int[], int);
void show_array(int[], int);
void sortlower_array(int[], int);
void sortupper_array(int[], int);
void showHalf(int[], int);

int main() {

	srand(time(NULL));
	
	//Subtask 1

	int nterm, diff, lgth;

	cout << "Enter the first term: ";
	cin >> nterm;
	cout << "Enter the difference between two consecutive terms: ";
	cin >> diff;
	cout << "Enter the length of the series: ";
	cin >> lgth;
	cout << endl;

	mathSeries(nterm, diff, lgth);
	
	cout << endl << endl;

	//Subtask 2

	int sz, k;
	int nums[100];

	cout << "Enter the size of the array: ";
	cin >> sz;
	cout << "Enter the value of K (between 1 and half of size): ";
	cin >> k;

	if (k > (sz / 2)) {
		cout << "Please enter a value at most half of the size inputed: ";
		cin >> k;
	}

	generate_array(nums, sz);
	cout << "The values of the array are:" << endl;
	show_array(nums, sz);
	cout << endl;

	sortlower_array(nums, sz);
	cout << "The lowest " << k << " values of the array are: " << endl;
	showHalf(nums, k);
	cout << endl;

	sortupper_array(nums, sz);
	cout << "The highest " << k << " values of the array are: " << endl;
	showHalf(nums, k);
	cout << endl;

	return 0;
}

void mathSeries(int n, int d, int l) {
	int sum = 0;

	for (int i = 0; i < l; i++) {
		sum = sum + n;
		n = n + d;
		if (i + 1 != l)
			cout << n-d << " + ";
		else
			cout << n-d << " = " << sum << endl;
	}
	
}

void generate_array(int nums[], int sz) {
	for (int i = 0; i < sz; i++) {
		nums[i] = (rand() % 99) + 1;
	}
}
void show_array(int nums[], int sz) {
	for (int i = 0; i < sz; i++)
		cout << nums[i] << " ";
}

void sortlower_array(int nums[], int sz) {
	int startScan, minIndex, minValue;

	for (startScan = 0; startScan < (sz - 1); startScan++) {
		minIndex = startScan;
		minValue = nums[startScan];
		for (int index = startScan + 1; index < sz; index++) {
			if (nums[index] < minValue) {
				minValue = nums[index];
				minIndex = index;
			}
		}
		nums[minIndex] = nums[startScan];
		nums[startScan] = minValue;
	}
}

void sortupper_array(int nums[], int sz) {
	int startScan, minIndex, minValue;

	for (startScan = 0; startScan < (sz - 1); startScan++) {
		minIndex = startScan;
		minValue = nums[startScan];
		for (int index = startScan + 1; index < sz; index++) {
			if (nums[index] > minValue) {
				minValue = nums[index];
				minIndex = index;
			}
		}
		nums[minIndex] = nums[startScan];
		nums[startScan] = minValue;
	}
}

void showHalf(int nums[], int k) {
	for (int i = 0; i < k; i++) {
		cout << nums[i] << " ";
	}
}