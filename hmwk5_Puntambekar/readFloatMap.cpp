//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 5 - Problem 6

#include <iostream>
#include <fstream>
#include <array>
#include <string>
using namespace std;

int split(string inputString, char delimiter, string storageArray[], int lengthOfArray) //This algorithm splits a string based on delimiters and stores the split strings into a string array
{
    int splitString = 0; //Count the number of times the string is split (word count)
    string word = ""; //Variable to keep track of split strings
    if (inputString == "") //If the inputString is an empty string, return 0
    {
        return splitString;
    }
    inputString = inputString + delimiter; //Add a delimiter at the end of the string to catch the last word in inputString
    for (int i = 0; i <= inputString.length(); i++) //Loop through inputString length to find if the inputString has delimiters
    {
        if (inputString[i] != delimiter) //If the inputString does not have a delimiter at position i, then add the word to word variable
        {
            word = word + inputString[i];
        }
        else if (word != "") //Else if word is not an empty string/delimiter
        { 
            storageArray[splitString] = word; //Add the word to storageArray at position splitString
            splitString++; //Add 1 to split string to keep track of words
            word = ""; //Reset word back to an empty string
        }
    }
    return splitString; //Return the word count
}

int readFloatMap(string fileName, double arr[][4], int numRowsOfArray) //This algorithm reads a file containing doubles in the form of an array and stores each double in a 2D array
{
    ifstream file(fileName); //Create an input file stream of the fileName
    string line = ""; //Create a string variable to keep track of the line in the file
    int lines = 0; //Counts the number of rows for the 2D array
    string storageArray[4]; //Create a storageArray to store the conversion of each line in the file to a string array made possible by split helper function
    if (file.fail()) //If the file fails to open, return -1
    {
        return -1;
    }
    while(getline(file, line)) //Read all of the lines from the file
    {
        if (line != "") //Check to see if the line is not an empty string
        {
            split(line, ',', storageArray, 4); //Split the line into a string array using split function
            for (int i = 0; i < 4; i++) //Loop through the number of columns in the input array
            {
                arr[lines][i] = stod(storageArray[i]); //Store the value of storage array at index i in the position arr[lines][i]
            }
            lines++; //Increment lines by 1
        }
    }
    return lines; //Return the number of lines
}

void printArray(double arr[][4], int numRows) //Function to print array, not needed in code runner
{
    for (int i = 0; i < numRows; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << endl;
        }
    }
}

int main()
{
    //Test case 1
    //Expected output
    /*
    2
    23.5
    34.3
    1.3
    0.23
    203.5
    134.3
    1.33
    11.23
    */
    // double floatMap[2][4];
    // cout << readFloatMap("testCase1Problem6.txt", floatMap, 2) << endl;
    // printArray(floatMap,2);
    
    //Test case 2
    //Expected output
    /*
    4
    3.11
    3.2
    0.85
    1.18
    4.07
    0.84
    1.98
    1.24
    1.04
    2.31
    1.69
    0.2
    0.05
    4.42
    1.91
    */
    double floatMap1[4][4];
    cout << readFloatMap("testCase2Problem6.txt", floatMap1, 4) << endl;
    printArray(floatMap1,4);
}