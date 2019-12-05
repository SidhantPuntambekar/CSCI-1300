//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 5 - Problem 7

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

int readRatings(string fileName, string users[], int ratings[][50], int numUsers, int maxRows, int maxCols) //This algorithm reads ratings from a ratings file and stores the users in a user array and ratings in a ratings 2D array
{
    ifstream file(fileName); //Open an input file stream to read from the input file
    string line = ""; //Create a string variable to keep track of the line
    int numUsersInFile = numUsers; //Set numUsersInFile to numUsers to append and not overwrite
    int lines = 0; //Create a lines variable to keep track of row number in the 2D array
    if (numUsers == maxRows) //If numUsers == maxRows return -2
    {
        return -2;
    }
    if (file.fail()) //If the file fails to open return -1
    {
        return -1;
    }
    while (getline(file,line) && lines < maxRows) //Read all of the lines in the file and make sure lines is less than maxRows
    {
        if (line != "") //If line does not equal an empty string
        {
            string storage[51]; //Create a storage array of size 51
            int count = split(line, ',', storage, 51); //Define a count variable set to the number of indices in the storage array
            users[numUsersInFile] = storage[0]; //Store the position zero of storage in users array 
            for (int k = 1; k < count; k++) //Loop through the columns of the ratings file 
            {
                ratings[numUsersInFile][k-1] = stoi(storage[k]); //Store the value of storage[k] at position in ratings[numUsersInFile][k-1]
            }
            numUsersInFile++; //Increment numUsersInFile by one
        }
        lines++; //Increament lines by 1
    }
    return numUsersInFile; //Return numUsersInFile
}

void printArray(double arr[][50], int numRows) //Function to print array, not needed in code runner
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
    50
    */
    string users[50] = {};
    int ratings[50][50] = {{0}};
    int numUsers = 0;
    int maxRows = 50;
    int maxColumns = 50;
    cout << readRatings("testCase1Problem7.txt", users, ratings, numUsers, maxRows, maxColumns) << endl;
    
    //Test case 2
    //Expected output
    //4
    string users1[50] = {};
    int ratings1[50][50] = {{0}};
    int numUsers1 = 0;
    int maxRows1 = 50;
    int maxColumns1 = 50;
    cout << readRatings("testCase2Problem7.txt", users1, ratings1, numUsers1, maxRows1, maxColumns1) << endl;
}