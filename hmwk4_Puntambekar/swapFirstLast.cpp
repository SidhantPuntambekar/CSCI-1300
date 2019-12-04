//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 4 - Problem 4

#include <iostream>
#include <array>
using namespace std;

void swapFirstLast(int inputArray[], int elementsInArray) //This algorithm takes an inputArray and elements in array and swaps the first and last one
{
    int temp = inputArray[0]; //Create an integer value to track the first element of inputArray
    inputArray[0] = inputArray[elementsInArray-1]; //Swap the first and last values of the inputArray
    inputArray[elementsInArray-1] = temp; //Reassign the last element to the temp variable
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
    //30 20 10
    int arrTestCase1[3] = {10, 20, 30};
    swapFirstLast(arrTestCase1, 3);
    printArray(arrTestCase1, 3);
    
    //Test case 2
    //Expected output
    //1 4 3 2 5
    int arrTestCase2[5] = {5, 4, 3, 2, 1};
    swapFirstLast(arrTestCase2, 5);
    printArray(arrTestCase2, 5);
}