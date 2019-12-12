//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Project 2 - Problem 2 Code Runner

#include <iostream>
#include "user.h"
#include <fstream>
using namespace std;

User::User() //Default constructor for user class
{
    username = "";
    size = 50;
    numRatings = 0;
    for (int i = 0; i < size; i++)
    {
        ratings[i] = 0;   
    }
}

User::User(string userName, int Ratings[], int numOfRatings) //Parametrized constructor for User
{
    if (numRatings <= size)
    {
        username = userName;
        for (int i = 0; i < numOfRatings; i++)
        {
            ratings[i] = Ratings[i];
        }
        for (int j = numOfRatings; j < 50; j++)
        {
            ratings[j] = 0;
        }
        numRatings = numOfRatings;
    }
}

string User::getUsername() //Return the user's name
{
    return username;
}

void User::setUsername(string newUsername) //Set the username to a newUsername
{
    username = newUsername;
}

int User::getRatingAt(int index) //Get the rating of a book from a particular index in the users array
{
    if (index >= 0 && index < 50)
    {
        return ratings[index];
    }
    else
    {
        return -1;
    }
}

bool User::setRatingAt(int index, int newRating) //Set the rating to a new value in the user's array
{
    if (index >= 0 && index < 50 && newRating >= 0 && newRating <= 5)
    {
        ratings[index] = newRating;
        return true;
    }
    else
    {
        return false;
    }
}

int User::getNumRatings() //Get the number of ratings 
{
    return numRatings;
}

void User::setNumRatings(int newNumRatings) //Set a new number of ratings
{
    numRatings = newNumRatings;
}

int User::getSize() //Return the size of the array
{
    return size;
}

// int split(string inputString, char delimiter, string storageArray[], int lengthOfArray) //This algorithm splits a string based on delimiters and stores the split strings into a string array
// {
//     int splitString = 0; //Count the number of times the string is split (word count)
//     string word = ""; //Variable to keep track of split strings
//     if (inputString == "") //If the inputString is an empty string, return 0
//     {
//         return splitString;
//     }
//     inputString = inputString + delimiter; //Add a delimiter at the end of the string to catch the last word in inputString
//     for (int i = 0; i <= inputString.length(); i++) //Loop through inputString length to find if the inputString has delimiters
//     {
//         if (inputString[i] != delimiter) //If the inputString does not have a delimiter at position i, then add the word to word variable
//         {
//             word = word + inputString[i];
//         }
//         else if (word != "") //Else if word is not an empty string/delimiter
//         { 
//             storageArray[splitString] = word; //Add the word to storageArray at position splitString
//             splitString++; //Add 1 to split string to keep track of words
//             word = ""; //Reset word back to an empty string
//         }
//     }
//     return splitString; //Return the word count
// }

// int readRatings(string fileName, User users[], int numUsers, int usersArrSize, int maxCols) //This algorithm reads ratings from a ratings file and stores the users in a user array and ratings in a ratings 2D array
// {
//     ifstream file(fileName); //Open an input file stream to read from the input file
//     string line = ""; //Create a string variable to keep track of the line
//     int numUsersInFile = numUsers; //Set numUsersInFile to numUsers to append and not overwrite
//     int lines = 0; //Create a lines variable to keep track of row number in the 2D array
//     if (numUsers == usersArrSize) //If numUsers == maxRows return -2
//     {
//         return -2;
//     }
//     if (file.fail()) //If the file fails to open return -1
//     {
//         return -1;
//     }
//     while (getline(file,line) && lines < usersArrSize) //Read all of the lines in the file and make sure lines is less than maxRows
//     {
//         if (line != "") //If line does not equal an empty string
//         {
//             string storage[maxCols+1]; //Create a storage array of size 51
//             int count = split(line, ',', storage, maxCols+1); //Define a count variable set to the number of indices in the storage array
//             users[numUsersInFile].setUsername(storage[0]); //Store the position zero of storage in users array 
//             for (int k = 1; k < count; k++) //Loop through the columns of the ratings file 
//             {
//                 users[numUsersInFile].setRatingAt(k-1, stoi(storage[k])); //Store the value of storage[k] at position in ratings[numUsersInFile][k-1]
//             }
//             numUsersInFile++; //Increment numUsersInFile by one
//         }         
//         lines++; //Increament lines by 1
//     }
//     return numUsersInFile; //Return numUsersInFile
// }