//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 7 - Problem 1

#include <iostream>
#include "book.h"
#include <fstream>
using namespace std;

Book::Book() //Default constructor for the book object. Initliazes all parameters to zero by default
{
    author = "";
    title = "";
}

Book::Book(string titleName, string authorName) //Parametrized constructor constructs Book objects
{
    author = authorName;
    title = titleName; 
}

string Book::getTitle() //Returns the title of the book object
{
    return title;
}

void Book::setTitle(string newTitle) //Set the title of the book object with a newTitle
{
    title = newTitle;
}

string Book::getAuthor() //Get the author of the book object
{
    return author;
}

void Book::setAuthor(string newAuthor) //Set the author of the book object with a newAuthor
{
    author = newAuthor;
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
                arrayOfBooks[numBooksStored] = Book(storageArray[1],storageArray[0]);
                numBooksStored++; //Increment numBooksStored by one
            }
        }
    }
    return numBooksStored; //Return the number of books stored
}

// void printAllBooks(Book bookArray[], int numOfBooks)
// {
//     string fileName; //Create a filename variable to keep track of filename
//     int numBooksStored; //Create a numBooksStored variable
//     int size; //Declare the size of the authors and titles array
//     if (numOfBooks <= 0) //If the numOfBooks is less than or equal to zero, no books are stored 
//     {
//         cout << "No books are stored" << endl;
//     }
//     else //If numOfBooks is greater than zero
//     {
//         cout << "Here is a list of books" << endl; //Print a list of books
//         for (int i = 0; i < numOfBooks; i++) // Print the titles and authors at index i
//         {
//             cout << bookArray[i].getTitle() << " by " << bookArray[i].getAuthor() << endl; //Print out books by title and author
//         }
//     }
// }

// void printBooksByAuthor(Book books[], int numOfBooks, string authorName)
// {
//     if (numOfBooks <= 0) //If the numBooks is less than or equal to zero, no books are stored
//     {
//         cout << "No books are stored" << endl;
//     }
    
//     if (numOfBooks > 0) //If the number of books is greater than zero
//     {
//         int count = 0; //Declare a count variable to keep track of number of books by author
//         for (int i = 0; i < numOfBooks; i++) //Loop through the number of books and search for books by author
//         {
//             if (books[i].getAuthor() == authorName) //If the author at index i == authorName, increment count by 1
//             {
//                 count++;
//             }
//         }
//         if (count > 0) //If count is greater than zero
//         {
//             cout << "Here is a list of books by " << authorName << endl; //Print "Here is a list of books by"
//             for (int j = 0; j < numOfBooks; j++) //Loop through the number of books
//             {
//                 if (books[j].getAuthor() == authorName) //If the author at index j is the same as authorName, print out the title of book at j
//                 {
//                     cout << books[j].getTitle() << endl; //Print out the author's books by title
//                 }
//             }
//         }
//         else //If no books exist by the author, then print that there are no books by authorName
//         {
//             cout << "There are no books by " << authorName << endl;
//         }
//     }
// }