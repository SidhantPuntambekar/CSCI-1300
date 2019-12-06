//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 6 - Problem 6

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

void printBooksByAuthor(Book books[], int numOfBooks, string authorName)
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
            if (books[i].getAuthor() == authorName) //If the author at index i == authorName, increment count by 1
            {
                count++;
            }
        }
        if (count > 0) //If count is greater than zero
        {
            cout << "Here is a list of books by " << authorName << endl; //Print "Here is a list of books by"
            for (int j = 0; j < numOfBooks; j++) //Loop through the number of books
            {
                if (books[j].getAuthor() == authorName) //If the author at index j is the same as authorName, print out the title of book at j
                {
                    cout << books[j].getTitle() << endl; //Print out the author's books by title
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
    //Here is a list of books by Author A
    //Book 1
    //Book 2
    //Book 3
    Book book1 = Book("Book 1", "Author A");
    Book book2 = Book("Book 2", "Author A");
    Book book3 = Book("Book 3", "Author A");
    Book listOfBooks[] = {book1, book2, book3};
    int numberOfBooks = 3;
    string author = "Author A";
    printBooksByAuthor(listOfBooks, numberOfBooks, author);
    
    //Test case 2
    //Expected output
    //There are no books by Author A
    Book book4 = Book("Book 4", "Author B");
    Book book5 = Book("Book 5", "Author C");
    Book book6 = Book("Book 6", "Author D");
    Book listOfBooks1[] = {book4, book5, book6};
    int numberOfBooks1 = 3;
    string author1 = "Author A";
    printBooksByAuthor(listOfBooks1, numberOfBooks1, author1);
}