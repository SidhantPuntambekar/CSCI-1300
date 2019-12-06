//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 6 - Problem 4

#include <iostream>
#include "book.h"
#include "book.cpp"
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

int readBooks(string fileName, Book arrayOfBooks[], int numBooksStored, int size) //This algorithm reads a file containing authors and books and stores the titles and authors in an array respectively
{
    ifstream books(fileName); //Open an input string for the input filename
    string storageArray[2]; //Create a storage array variable to be stored in split containing one title and one author
    string line = ""; //Create a string variable to keep track of the line in the file
    if (numBooksStored == size) //If the numBooksStored is equal to the size of the array, return -2
    {
        return -2;
    }
    if (books.fail()) //If the file is empty, return -1
    {
        return -1;
    }
    while (getline(books,line)) //grabs each line as long as there are lines to be grabbed from file
    {
        split(line, ',', storageArray, 2); //Run the split function from the last hw to split the line at the delimiter, comma
        if (line != "") //If the line is not an empty string
        {
            if (numBooksStored < size) //If the numBooksStored is less than the size of the array
            {
                arrayOfBooks[numBooksStored] = Book(storageArray[1],storageArray[0]); //Store the book object in the arrayOfBooks by constructing a Book object with author and title
                numBooksStored++; //Increment numBooksStored by one
            }
        }
    }
    return numBooksStored; //Return the number of books stored
}

int main()
{
    //Test case 1
    //Expected output
    /*
    Author A
    Author B
    Book 1
    Book 2
    */
    Book books[10] = {};
    readBooks("testCase2Problem2.txt",books, 0, 10);
    // Code to print the values
    cout<<books[0].getAuthor()<<endl;
    cout<<books[1].getAuthor()<<endl;
    cout<<books[0].getTitle()<<endl;
    cout<<books[1].getTitle()<<endl;
    
    //Test case 2
    //Expected output
    /*
    Douglas Adams
    Richard Adams
    The Hitchhiker's Guide To The Galaxy
    Watership Down
    */
    Book books1[50] = {};
    readBooks("testCase1Problem2.txt",books1, 0, 50);
    // Code to print the values
    cout<<books1[0].getAuthor()<<endl;
    cout<<books1[1].getAuthor()<<endl;
    cout<<books1[0].getTitle()<<endl;
    cout<<books1[1].getTitle()<<endl;
}