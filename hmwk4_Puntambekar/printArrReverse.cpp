//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 4 - Problem 2

#include <iostream>
#include <string>
#include <array>
using namespace std;

void printArrReverse(int inputArray[], int arrayLength) //This algorithm takes in an array and a length of array and reverses the order of the array
{
    for (int i = arrayLength-1; i >= 0; i--) //Loop from end of array to start decrementing by 1 every time and print out the elements at position i (reversed)
    {
        cout << inputArray[i] << endl;
    }
}

int main()
{
    //Test case 1
    //Expected output
    /*9
    8
    7
    6
    5
    4
    3
    2
    1
    0
    */
    int arrTestCase1[] = {0,1,2,3,4,5,6,7,8,9};
    int lenTestCase1 = 10;
    printArrReverse(arrTestCase1, lenTestCase1);
    
    //Test case 2
    //Expected output
    /*
    7
    9
    1
    */
    int arrTestCase2[] = {1, 9, 7};
    int lenTestCase2 = 3;
    printArrReverse(arrTestCase2, lenTestCase2);
}