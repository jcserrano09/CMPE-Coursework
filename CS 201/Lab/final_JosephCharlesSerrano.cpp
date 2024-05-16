//Author: Joseph Charles Serrano
//Filename: final_JosephCharlesSerrano
//Assignment: Lab Final

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void forloops(); //subtask 1 function prototype

void array_populate(int[], int); // subtask 2 function prototypes
void show_array(int[], int);
int sum_of_positive(int[], int);
int sum_of_negative(int[], int);
int sum_of_even(int[], int);
int sum_of_odd(int[], int);

int main() {
	srand(time(NULL));

	//SubTask 1
	forloops();

	cout << endl << endl;

	//subtask 2
	int num[100], sz;
	cout << "Enter the length of the array: ";
	cin >> sz;
	
	array_populate(num, sz);
	show_array(num, sz);
	cout << "Sum of positive integers: " << sum_of_positive(num, sz) << endl;
	cout << "Sum of negative integers: " << sum_of_negative(num, sz) << endl;
	cout << "Sum of even integers: " << sum_of_even(num, sz) << endl;
	cout << "Sum of odd integers: " << sum_of_odd(num, sz) << endl;

}

void forloops() { //task 1 function def
	
	int n, x1, x2, t;
	x1 = 1; 
	x2 = 1; 
	t = 0;

	cout << "Enter the length of the Fibonacci (3-20): ";
	cin >> n;
	

	if (n < 3 || n > 20) {
		cout << "Please enter a valid length (3-20) \n";
		forloops();
	}
	else {
		cout << "The series is : \n";
		for (int i = 1; i <= n; ++i) {
			if (i == 1) {
				cout << x1 << " ";
				continue;
			}
			if (i == 2) {
				cout << x2 << " ";
				continue;
			}
			t = x1 + x2;
			x1 = x2;
			x2 = t;
			cout << t << ' ';
		}
	}
}

//Subtask 2 Function defs ---------
void array_populate(int num[], int sz) {
	for (int i = 0; i < sz; i++)
		num[i] = -99 +rand()%(-99 - 99 + 1);
}

void show_array(int num[], int sz){
	cout << "The randomly generated array: \n";
	for (int i = 0; i < sz; i++)
		cout << num[i] << " ";
	cout << endl;
}

int sum_of_positive(int num[], int sz){
	int posSum = 0;
	for (int i = 0; i < sz; i++) {
		if (num[i] >= 0) {
			posSum += num[i];
		}
	}
	return posSum;
}

int sum_of_negative(int num[], int sz){
	int negSum = 0;
	for (int i = 0; i < sz; i++) {
		if (num[i] <= 0) {
			negSum += num[i];
		}
	}
	return negSum;
}

int sum_of_even(int num[], int sz){
	int evenSum = 0;
	for (int i = 0; i < sz; i++) {
		if (num[i] % 2 == 0) {
			evenSum += num[i];
		}
	}
	return evenSum;
}

int sum_of_odd(int num[], int sz){
	int oddSum = 0;
	for (int i = 0; i < sz; i++) {
		if (num[i] % 2 != 0) {
			oddSum += num[i];
		}
	}
	return oddSum;
}
