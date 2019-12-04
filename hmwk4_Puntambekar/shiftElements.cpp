//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 4 - Problem EC

#include <iostream>
#include <array>
#include <string>
using namespace std;

void shiftElements(int inputArray[], int arrayLength, int shiftLength)
{
    if (shiftLength <= 0) //Prints "no shift" if shifting value is less than or equal to zero
    {
        cout << "No shift" << endl;
        return;
    }
    
    if (shiftLength > arrayLength) //If shiftLength is larger than length, shift the array by k % n
    {
        shiftLength = shiftLength % arrayLength;
    }
    
    int lastValues[100000]; //Creates the array of the final values with artificially high number of elements
    
    int lastValuesCount = 0; //Tracks index of lastValues array with  
    
    for (int i = arrayLength - shiftLength; i < arrayLength; i++) //Loads and loops through the array
    {
        lastValues[lastValuesCount] = inputArray[i];
        lastValuesCount++;
    }
    
    int count = 1; //Helps keep track of the index where the value should shift
    
    for (int j = arrayLength - shiftLength - 1; j >= 0; j--) //Loop through the inputArry and shift the original array by shiftLength
    {
        inputArray[arrayLength - count] = inputArray[j];
        count++;
    }
    
    for (int k = 0; k < shiftLength; k++) //Copies back in the inputArray of final values
    {
        inputArray[k] = lastValues[k];
    }
}

void printArray(int arr[], int elements) //Function to print out the array (not needed in codeRunner)
{
    for (int i = 0; i < elements; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    //Test case 1
    //Expected output
    /* 
    30 10 20
    */
    int arrTestCase1[3] = {10, 20, 30};
    shiftElements(arrTestCase1, 3, 1);
    printArray(arrTestCase1, 3);
    
    //Test case 2
    //Expected output
    /*
    50 40 30 20 10
    */
    int arrTestCase2[5] = {10, 20, 30, 40, 50};
    shiftElements(arrTestCase2, 5, 3);
    printArray(arrTestCase2, 5);
}