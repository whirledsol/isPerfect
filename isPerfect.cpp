// Name: Will Rhodes
// Course: CSC 415
// Semester: Spring 2014
// Instructor: Dr. Pulimood
// Exercise : Introduction to C++
// Description: Takes an input and tests if it is a perfect number
// Filename: isPerfect.cpp
// Last modified on: 2/14/2014


#include <iostream>
#include <fstream>
#include <cmath>
#include <cctype>
#include <vector>
#include <iomanip>
using namespace std;
/**
* sumVector: commutes the sum of the elements of a vector of type int
*/
int sumVector(vector<int> vect)
{
	
	int runningSum = 0;//start the sum at zero
	
	//iterate through elements
	for(int i = 0; i<vect.size(); ++i)
	{
		//for each element, add it on to the sum
		runningSum += vect.at(i);
		//cout << vect.at(i) << endl; //DEBUG: DISPLAYS FACTORS
	}
	
	//return the sum after going through elements
	return runningSum;
}



/**
* isPerfect: returns true if the input parameter is a perfect number, false otherwise
*/
bool isPerfect(int number)
{
	vector<int> factors; //instantiate an array to hold all the found factors
	int sum; //the sum of all the factors found
	
	//go through possible numbers and find factors
	for(int i = 1; i<number; ++i)
	{
		if(number%i == 0)
		{
			//factor found
			factors.push_back(i);
		}	
	}
	//now we have all factors, let's sum them
	sum = sumVector(factors);
	
	//we know it's a perfect number if the sum equals the number
	if(sum == number)
	{
		return true;
	}
	else
	{
		return false;
	}
}


/**
 * populateArray: takes an empty array (passed by reference) and the upper bound number to check for (ub), returns the length of items in the array
 */
int populateArray(int perfectNumbers[], int arrayTotalSize, int ub)
{
    
    int arrayLength = 0; //a counter for the number of valid items in the array
    
    //the input appears to be valid, check to see if all leading up to input are perfect
    for(int i=1;i<=ub;++i)
    {
        //is i perfect? if so add to array.
        if(isPerfect(i) && arrayLength<arrayTotalSize)
        {
            perfectNumbers[arrayLength] = i;
            arrayLength++; //make sure it adds the size of valid array items
        }
        
    }
    
    return arrayLength;
    
    
    
}
void printArray(int array[], int numberOfItems)
{
    cout<<"The array contains..."<<endl;
    for(int i=0;i<numberOfItems;++i)
    {
        cout<<setw(10)<<i<<setw(10)<<array[i]<<endl;
    }
    
}

