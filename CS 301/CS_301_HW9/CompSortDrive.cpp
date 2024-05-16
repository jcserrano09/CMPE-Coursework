// CS 301
// Assignment 9

/***************************************************************************************
*    Title: <sortDr.cpp>
*    Author: <Nell Dale, PhD; Chip Weems; Tim Richards>
*    Date: <8/26/2016>
*    Code version: < v1 >
*    Availability: <https://www.jblearning.com/catalog/productdetails/9781284089189#productInfo >
*
***************************************************************************************/

#include <fstream>
#include <iostream>
#include <cstdlib>
const int SIZE = 50;
#include "bubbleSrt.h"
#include "quickSrt.h"
#include "insertionSrt.h"
#include "selectionSrt.h"

using namespace std;
typedef int ItemType;

void Print(ofstream&, int[]);	
void InitValues(int[]);			
void CopyValues(int[], int[]);	

void Swap(ItemType& item1, ItemType& item2) {
    ItemType tempItem;

    tempItem = item1;
    item1 = item2;
    item2 = tempItem;
}

int main() {

    ifstream inFile;      
    ofstream outFile;      
    string inFileName;     
    string outFileName;    
    string outputLabel;
    string command;        
    ItemType values[SIZE];
    int numCommands;
    ItemType copyValues[SIZE];
    
    cout << "Enter name of input command file; press return." << endl;
    cin >> inFileName;
    inFile.open(inFileName.c_str());

    cout << "Enter name of output file; press return." << endl;
    cin >> outFileName;
    outFile.open(outFileName.c_str());

    cout << "Enter name of test run; press return." << endl;
    cin >> outputLabel;
    outFile << outputLabel << endl;

    inFile >> command;
    InitValues(values);
    CopyValues(values, copyValues);
    outFile << "Initial values" << endl;
    Print(outFile, values);

    numCommands = 0;
    while (command != "Quit") {
   
        if (command == "BubbleSort") {
            BubbleSort(values, SIZE - 1);
            outFile << "Results from BubbleSort: " << endl;
            Print(outFile, values);
            outFile << endl;
        }
  
        else if (command == "QuickSort") {
            QuickSort(values, 0, SIZE - 1);
            outFile << "Results from QuickSort: " << endl;
            Print(outFile, values);
            outFile << endl;
        }

        else if (command == "InsertionSort") {
            InsertionSort(values, SIZE - 1);
            outFile << "Results from InsertionSort: " << endl;
            Print(outFile, values);
            outFile << endl;
        }

        else if (command == "SelectionSort") {
            SelectionSort(values, SIZE - 1);
            outFile << "Results from SelectionSort: " << endl;
            Print(outFile, values);
            outFile << endl;
        }
 
        else if (command == "Refresh")
            CopyValues(copyValues, values);
        else if (command == "ReInitialize") {
            InitValues(values);
            CopyValues(values, copyValues);
            outFile << endl << "Initial Values: " << endl;
            Print(outFile, values);
        }
        else
            outFile << "Input not recognized." << endl;

        numCommands++;
        cout << " Command " << command << " completed."
            << endl;
        inFile >> command;

    }

    cout << "Testing completed." << endl;
    inFile.close();
    outFile.close();
    return 0;
}

void InitValues(int values[]) {
    for (int index = 0; index < SIZE; index++)
        values[index] = (std::rand() % 1000);
}

void Print(ofstream& outFile, int values[]) {
    using namespace std;
    for (int count = 0; count < SIZE; count = count + 10)
        outFile << values[count] << ", " << values[count + 1] << ", " << values[count + 2] << ", "
        << values[count + 3] << ", " << values[count + 4] << ", " << values[count + 5] << ", "
        << values[count + 6] << ", " << values[count + 7] << ", " << values[count + 8]
        << ", " << values[count + 9] << endl << endl;

}

void CopyValues(int inData[], int outData[]) {
    for (int count = 0; count < SIZE; count++)
        outData[count] = inData[count];
}