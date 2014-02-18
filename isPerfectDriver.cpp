// Name: Will Rhodes
// Course: CSC 415
// Semester: Spring 2014
// Instructor: Dr. Pulimood
// Exercise : Introduction to C++
// Description: Takes an input and tests if it is a perfect number
// Filename: isPerfectDriver.cpp
// Last modified on: 2/14/2014



#include <iostream>
#include <fstream>
#include <cmath>
#include <cctype>
#include <vector>
using namespace std;
#include "isPerfect.h"


/**
* main: asks the user for input and calls functions defined in isPerfect.cpp
*/
int main (void)
{
	//declarations
    int inputValue; //the value inputed by the user
	bool response; //the response of the isPerfect function
    const int arrayTotalSize = 10; //a constantly defined size
    
    int perfectNumbers[arrayTotalSize];//creates an array of size 10
    
	//ask the user
	cout << "Enter the upper bound number: " << endl;
	
	//check to make sure that the user input is valid
	if(!(cin >> inputValue))
	{
		//the user input is not valid so gracefully show an error message
		cout << "The input was not an integer. Please try again." << endl;
	}
	else
	{
		
        arrayLength = populateArray(perfectNumbers, inputValue)
		printArray(perfectNumbers,arrayLength);
    }

	//end the main method
	return 0;
	
}