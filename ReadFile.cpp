/*
Student Name: Arianna Bikombe
Date: April 1, 2021
Course: CSCI175N
Lab Assignment: Lab07-01-ReadFile
Project Name: Read File
File Name: Lab07-01-ReadFile
Description: Reads a file and counts, sums, and averages the numbers.
Limitations: Doesn't do very much.
Credits: Not Applicable
 */

#include <iostream>
#include <fstream>
using namespace std;

// Function prototype
void myName();

int main()
{
    
    int i, number;
    double newNumber;

    newNumber = 0;

    myName();
    
    // file open
    ifstream infile;
    infile.open("Random.txt");

    // test for file open errors
    if (infile) {
        for (i = 0; infile >> number; i++) {
            newNumber = newNumber += number;    // count formula
        }
        cout << "Number of numbers: " << i << endl; // count
        cout << "Sum of the numbers: " << newNumber << endl;    // sum
        cout << "Average of the numbers: " << newNumber / i << endl;    // average
        infile.close(); // file close
    }
    else {
        cout << "Error opening the file." << endl;  // test for file open error
    }

    // skip line
    cout << endl;

    system("pause");

    return 0;
}

//*************************************************
// The myName function outputs my name, course, & *
// Program #, and a blank line as typical for all *
// programs.                                      *
//*************************************************

void myName() {

    // Print out your name and course
    cout << "Arianna Bikombe\n";
    cout << "CSCI175N\n";
    cout << "Lab07-01 Read File\n" << endl;

}

/*

test 1

Arianna Bikombe
CSCI175N
Lab07-01 Read File

Number of numbers: 200
Sum of the numbers: 105527
Average of the numbers: 527.635

Press any key to continue . . .

*/

/*

test 2

Arianna Bikombe
CSCI175N
Lab07 - 01 Read File

Error opening the file.

Press any key to continue . . .

*/