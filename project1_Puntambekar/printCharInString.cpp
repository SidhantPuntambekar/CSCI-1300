// CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation 304 - Thanika Reddy
//Project 1 - Problem 1

#include <iostream>
using namespace std;

void printCharInString(string inputString) //This algortihm takes in a string and prints the characters that compose the input string separated by a line
{
    if (inputString == "") //If the input string is empty, throw an error
    {
        cout << "Given string is empty!" << endl;
    }
    else //If the string has contents, then execute the following
    {
        for (int i = 0; i < inputString.length(); i++) //loop through the length of the input string and print out the character at each index i on a new line
        {
            cout << inputString[i] << endl;
        }
    }
}

int main()
{
    //Test case 1
    //Expected output
    /*
    A
    C
    G
    C */
    printCharInString("ACGC");
    
    //Test case 2
    //Expected output
    //Given string is empty!
    printCharInString("");
}