//Author: Joseph Charles Serrano
//Filename: solid.cpp
//Assignment#: HW02

#include<iostream>
using namespace std;

int main() {

	double length, height,width;
	double surf_area, volume;

	//height
	cout << "Enter the height of the solid: ";
	cin >> height;

	//width
	cout << "Enter the width of the solid: ";
	cin >> width;

	//length
	cout << "Enter the length of the solid: ";
	cin >> length;

	surf_area = 2 * (length * width + height * length + height * width);
	volume = height * length * width;

	//surface area and volume
	cout << "The surface area of the solid is: " << surf_area << endl;
	cout << "The volume of the solid is: " << volume << endl;

	return 0;
}