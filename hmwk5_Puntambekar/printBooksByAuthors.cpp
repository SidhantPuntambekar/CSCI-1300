//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 5 - Problem 4

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

int readBooks(string fileName, string titles[], string authors[], int numBooksStored, int size) //This algorithm reads a file containing authors and books and stores the titles and authors in an array respectively
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
                authors[numBooksStored] = storageArray[0]; //Store the value of storageArray[0] at author[numBooksStored]
                titles[numBooksStored] = storageArray[1]; //Store the value of storageArray[1] at titles[numBooksStored]
                numBooksStored++; //Increment numBooksStored by one
            }
        }
    }
    return numBooksStored; //Return the number of books stored
}

void printBooksByAuthor(string titles[], string authors[], int numOfBooks, string authorName)
{
    if (numOfBooks <= 0) //If the numBooks is less than or equal to zero, no books are stored
    {
        cout << "No books are stored" << endl;
    }
    
    if (numOfBooks > 0) //If the number of books is greater than zero
    {
        int count = 0; //Declare a count variable to keep track of number of books by author
        for (int i = 0; i < numOfBooks; i++) //Loop through the number of books and search for books by author
        {
            if (authors[i] == authorName) //If the author at index i == authorName, increment count by 1
            {
                count++;
            }
        }
        if (count > 0) //If count is greater than zero
        {
            cout << "Here is a list of books by " << authorName << endl; //Print "Here is a list of books by"
            for (int j = 0; j < numOfBooks; j++) //Loop through the number of books
            {
                if (authors[j] == authorName) //If the author at index j is the same as authorName, print out the title of book at j
                {
                    cout << titles[j] << endl;
                }
            }
        }
        else //If no books exist by the author, then print that there are no books by authorName
        {
            cout << "There are no books by " << authorName << endl;
        }
    }
}

int main()
{
    //Test case 1
    //Expected output
    /*
    Here is a list of books by Author A
    Book 1
    Book 3
    */
    string titles[3] = {"Book 1", "Book 2", "Book 3"};
    string authors[3] = {"Author A", "Author B", "Author A"};
    int numBooks = 3;
    string author = "Author A";
    printBooksByAuthor(titles, authors, numBooks, author);
    
    //Test case 2
    //Expected output
    /*
    There are no books by Author A
    */
    string titles1[3] = {"Book 1", "Book 2", "Book 3"};
    string authors1[3] = {"Author B", "Author C", "Author D"};
    int numBooks1 = 3;
    string author1 = "Author A";
    printBooksByAuthor(titles1, authors1, numBooks1, author1);
}