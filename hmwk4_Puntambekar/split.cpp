//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 4- Problem 6

#include <iostream>
#include <string>
#include <array>
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

void printArray(string arr[], int elements) //Function to print out the array (not needed in codeRunner)
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
    //3
    string words[6];
    cout << split("one small step",' ',words,6) << endl;
    printArray(words,6);
    
    //Test case 2
    //Expected output 
    //3
    string words2[6];
    cout << split(" one small step ",' ',words2,6) << endl;
    printArray(words2,6);
    
    //Test case 3
    //Expected output
    //3
    string words3[6];
    cout << split("cow/big pig/fish",'/',words3,6) << endl;
    printArray(words3,6);
    
    //Test case 4
    //Expected output
    //3
    string words4[6];
    cout << split("cow/big pig//fish",'/',words4,6) << endl;
    printArray(words4,6);
}