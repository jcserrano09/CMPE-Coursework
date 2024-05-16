//Author: Joseph Charles Serrano
//Filename: task2_JosephCharlesSerrano.cpp
//Assignment: Lab Task 2

#include <iostream>
using namespace std;

int main() {
	//SubTask 1-----------------
	cout << "Subtask 1: " << endl;

	double item1, item2, item3, item4, item5;
	item1 = 155.99;
	item2 = 243.59;
	item3 = 16.79;
	item4 = 12.89;
	item5 = 30.95;

	double salestax1, salestax2, salestax3, salestax4, salestax5;
	const double TAX_RATE = 0.0725;
	salestax1 = item1 * TAX_RATE;
	salestax2 = item2 * TAX_RATE;
	salestax3 = item3 * TAX_RATE;
	salestax4 = item4 * TAX_RATE;
	salestax5 = item5 * TAX_RATE;

	double totalsales = item1 + salestax1 + item2 + salestax2 + item3 + salestax3 + item4 + salestax4
		+ item5 + salestax5;

	cout << "Price of item 1: " << item1 << endl;
	cout << "Price of item 2: " << item2 << endl;
	cout << "Price of item 3: " << item3 << endl;
	cout << "Price of item 4: " << item4 << endl;
	cout << "Price of item 5: " << item5 << endl;
	cout << "Sales Tax of item 1: " << salestax1 << endl;
	cout << "Sales Tax of item 2: " << salestax2 << endl;
	cout << "Sales Tax of item 3: " << salestax3 << endl;
	cout << "Sales Tax of item 4: " << salestax4 << endl;
	cout << "Sales Tax of item 5: " << salestax5 << endl;

	cout << "Total is: " << totalsales << endl;
	cout << endl;

	//SubTask 2------------------

	cout << "Subtask 2: " << endl;

	const double PI = 3.141592;
	const double RADIUS = 16.0;

	double area, volume;
	area = 4 * PI * RADIUS*RADIUS;
	volume = 1.333333*PI*RADIUS*RADIUS*RADIUS;

	cout << "Radius of sphere is: " << RADIUS << "cm" << endl;
	cout << "Surface Area is: " << area << "cm" << endl;
	cout << "Volume is: " << volume << "cm" << endl;
	cout << endl;

	//SubTask 3--------------------

	cout << "Subtask 3: " << endl;

	cout << "*****************" << "		  " << "*          *" << endl;
	cout << "*				  " << "" << "**        **" << endl;
	cout << "*				  " << "" << "* *      * *" << endl;
	cout << "*				  " << "" << "*   *   *  *" << endl;
	cout << "********		  " << "	  " << "*     *    *" << endl;
	cout << "*				  " << "" << "*          *" << endl;
	cout << "*				  " << "" << "*          *" << endl;
	cout << "*				  " << "" << "*          *" << endl;
	cout << "*				  " << "" << "*          *" << endl;
	cout << "*				  " << "" << "*          *" << endl;
	
	return 0;
}