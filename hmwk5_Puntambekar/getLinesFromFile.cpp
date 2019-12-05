//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 5 - Problem 1

#include <iostream>
#include <fstream>
#include <array>
#include <string>
using namespace std; 

int getLinesFromFile(string fileName, int arr[], int arrayLength) //This algorithm takes in a fileName, an array and array length and reads the number of lines in the file
{
    ifstream in_file(fileName); //Create an input stream for the filename 
    int lines = 0; //Declare an int variable to keep track of number of lines 
    string n = ""; //Declare a string variable to keep track of the line in the stream
    if (in_file.fail()) //If the file contains nothing, return -1
    {
        return -1;
    }
    while (getline(in_file,n)) //grabs each line as long as there are lines to be grabbed from file
    {
        if (n != "") //If n is not an empty string, i.e has no contents 
        {
            if (lines < arrayLength) //If lines is less than arrayLength, prevents seg fault
            {
                arr[lines] = stoi(n); //Store the contents of line n in the index lines of arr using stoi function
                lines++; //Add one to lines
            }
        }
    }
    return lines; //Return the number of lines
}

void printArray(int array[], int arrayLength) //Function to print array
{
    for (int i = 0; i < arrayLength; i++)
    {
        cout << array[i] << endl;
    }
}

int main()
{
    //Test case 1
    //Expected output
    /*
    7
    11
    22
    33
    44
    55
    66
    77
    */
    int arrTestCase1[7];
    cout << getLinesFromFile("testCase1Problem1.txt", arrTestCase1, 7) << endl;
    printArray(arrTestCase1, 7);
    
    //Test case 2
    //Expected output
    /*
    4
    1
    5
    23
    18
    */
    int arrTestCase2[4];
    cout << getLinesFromFile("testCase2Problem1.txt", arrTestCase2, 4) << endl;
    printArray(arrTestCase2,4);
}