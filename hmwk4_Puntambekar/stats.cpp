//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 4 - Problem 3

#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

void stats(double inputArray[], int elementsInArray) //This array takes in an inputArray and the number of elements and finds the minimum, maximum values and average value of the array
{
    double minValue = inputArray[0]; //Set the minimum value to the first element in the array
    double maxValue = 0; //Set the max value equal to zero
    for (int i = 0; i < elementsInArray; i++) //Loop through the elements in inputArray
    {
        
        if (inputArray[i] < minValue) //If the value at index i of inputArray is less than minValue, set minValue equal to that element
        {
            minValue = double (inputArray[i]);
        }
    }
    cout << fixed << setprecision(2) << "Min: " << minValue << endl; //print out the min value with a decimal precision of 2
    
    for (int j = 0; j < elementsInArray; j++) //Loop through the elements in inputArray
    {
        if (inputArray[j] > maxValue) //If the value at index j of inputArray is greater than maxValue, set maxValue equal to that element
        {
            maxValue = double (inputArray[j]);
        }
    }
    cout << fixed << setprecision(2) << "Max: " << maxValue << endl; //Print out the max value with a decimal precision of 2
    
    double sum = 0; //Create a sum variable to keep track of sum of elements in array
    double average = 0; //Create an average variable to track the average value of the array
    for (int k = 0; k < elementsInArray; k++) //Loop through the array
    {
        sum = sum + inputArray[k]; //Sum the terms of the array at index k
        average = sum / elementsInArray; //Find the average for all of the elements in the array
    }
    cout << fixed << setprecision(2) << "Avg: " << average << endl; //Print out the average with a decimal precision of 2
} 

int main()
{
    //Test case 1
    //Expected output
    /*
    Min: 0.00
    Max: 9.00
    Avg: 4.50
    */
    double arrTestCase1[] = {0,1,2,3,4,5,6,7,8,9};
    int lenTestCase1 = 10;
    stats(arrTestCase1, lenTestCase1);
    
    //Test case 2
    //Expected output
    /*
    Min: 1.40
    Max: 9.80
    Avg: 4.60
    */
    double arrTestCase2[] = {1.4, 9.8, 2.6};
    int lenTestCase2 = 3;
    stats(arrTestCase2, lenTestCase2);
}