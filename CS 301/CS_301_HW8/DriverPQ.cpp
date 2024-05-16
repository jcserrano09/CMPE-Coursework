//CS 301
//Assignment 8

/***************************************************************************************
*    Title: <PQDr.cpp>
*    Author: <Nell Dale, PhD; Chip Weems; Tim Richards>
*    Date: <8/26/2016>
*    Code version: < v1 >
*    Availability: <https://www.jblearning.com/catalog/productdetails/9781284089189#productInfo >
*
***************************************************************************************/

#include <iostream>
#include <fstream>

typedef int ItemType;
#include "PQ.h"

using namespace std;

int main() {

    ifstream inFile;      
    ofstream outFile;      
    string inFileName;     
    string outFileName;    
    string outputLabel;
    string command;      

    ItemType item;
    PQ<int> queue(5);
    int numCommands;

    cout << "Enter name of input file: " << endl;
    cin >> inFileName;
    inFile.open(inFileName.c_str());

    cout << "Enter name of output file " << endl;
    cin >> outFileName;
    outFile.open(outFileName.c_str());

    cout << "Enter name of test run " << endl;
    cin >> outputLabel;
    outFile << outputLabel << endl;

    inFile >> command;


    numCommands = 0;
    while (command != "Quit") {

        try {

            if (command == "Enqueue") {

                inFile >> item;
                queue.Enqueue(item);
                outFile << item << " is enqueued." << endl;

            }
            else if (command == "Dequeue") {

                queue.Dequeue(item);
                outFile << item << " is dequeued. " << endl;

            }
            else if (command == "IsEmpty")
                if (queue.IsEmpty())
                    outFile << "Queue is empty." << endl;
                else
                    outFile << "Queue is not empty." << endl;

            else if (command == "IsFull")
                if (queue.IsFull())
                    outFile << "Queue is full." << endl;
                else outFile << "Queue is not full." << endl;
            else if (command == "MakeEmpty")
                queue.MakeEmpty();
        }
        catch (FullPQ) {

            outFile << "FullQueue exception thrown." << endl;

        }

        catch (EmptyPQ) {

            outFile << "EmtpyQueue exception thrown." << endl;

        }
        numCommands++;
        cout << " Command " << numCommands << " completed."
            << endl;
        inFile >> command;

    };

    cout << "Testing completed." << endl;
    inFile.close();
    outFile.close();
    return 0;
}
