//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 6 - Problem 5

#include <iostream>
#include "book.h"
#include "book.cpp"
using namespace std;

int split (string inputString, char delimiter, string storageArray[], int lengthOfArray) //This algorithm splits a string based on delimiters and stores the split strings into a string array
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

void printAllBooks(Book bookArray[], int numOfBooks)
{
    string fileName; //Create a filename variable to keep track of filename
    int numBooksStored; //Create a numBooksStored variable
    int size; //Declare the size of the authors and titles array
    if (numOfBooks <= 0) //If the numOfBooks is less than or equal to zero, no books are stored 
    {
        cout << "No books are stored" << endl;
    }
    else //If numOfBooks is greater than zero
    {
        cout << "Here is a list of books" << endl; //Print a list of books
        for (int i = 0; i < numOfBooks; i++) // Print the titles and authors at index i
        {
            cout << bookArray[i].getTitle() << " by " << bookArray[i].getAuthor() << endl; //Print out book objects by title and author
        }
    }
}

int main()
{
    //Test case 1
    //Expected output
    //Here is a list of books
    //Calculus1 by Gottfried Leibniz
    Book books[1];
    books[0].setTitle("Calculus1");
    books[0].setAuthor("Gottfried Leibniz");
    printAllBooks(books, 1);
    
    //Test case 2
    //Expected output
    //Here is a list of books
    //Calculus by Gottfried Leibniz
    //Algebra by Alan Turing
    //Physics by Isaac Newton
    Book books1[3];
    books1[0].setTitle("Calculus");
    books1[0].setAuthor("Gottfried Leibniz");
    books1[1].setTitle("Algebra");
    books1[1].setAuthor("Alan Turing");
    books1[2].setTitle("Physics");
    books1[2].setAuthor("Isaac Newton");
    printAllBooks(books1, 3);
}
