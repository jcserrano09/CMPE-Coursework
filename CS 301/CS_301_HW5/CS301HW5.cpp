//CS 301
//Assignment 5
//Group 9

#include <iostream>
#include <fstream>
#include "DynStack.h"
 
using namespace std;


int main() {

	DynStack<char> stack;
	char character;
	
	ifstream inputFile;
	ofstream outputFile;

	inputFile.open("characters.txt");
	if (!inputFile) {
		cout << "Incorrect File, cannot open." << endl;
		exit(1);
	}
	while (inputFile.get(character)) {
		stack.Push(character);
	}
	inputFile.close();

	outputFile.open("output.txt");
	if (!outputFile) {
		cout << "Incorrect File, cannot open." << endl;
		exit(1);
	}

	while (!stack.IsEmpty()) {
		stack.Pop(character);
		outputFile.put(character);
	}

	outputFile.close();
	return 0;
}
