//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 6 - Problem 7

#include <iostream>
#include <fstream>
#include "book.h"
using namespace std;

void printMenu()
{
    cout << "======Main Menu=====" << endl;
    cout << "1. Read books" << endl;
    cout << "2. Print all books" << endl;
    cout << "3. Print books by author" << endl;
    cout << "4. Quit" << endl;
}

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
                arrayOfBooks[numBooksStored] = Book(storageArray[1],storageArray[0]);
                numBooksStored++; //Increment numBooksStored by one
            }
        }
    }
    return numBooksStored; //Return the number of books stored
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
            cout << bookArray[i].getTitle() << " by " << bookArray[i].getAuthor() << endl;
        }
    }
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
                    cout << books[j].getTitle() << endl;
                }
            }
        }
        else //If no books exist by the author, then print that there are no books by authorName
        {
            cout << "There are no books by " << authorName << endl;
        }
    }
}

void hw6()
{
    int option = 0; //Create a variable to keep track of the user selection
    char c; //Prevents cin from getting overloaded
    Book arrayOfBooks[50]; //Define an arrayOfBooks to keep track of books in the library
    int numBooks = 0; //Keep track of the number of books in the library
    
    while (option != 4) //While the option does not equal 4 (quit)
    {
        printMenu(); //Print the menu to the console
        cin >> option; //Take in the users input and store it in cin
        cin.get(c); //Prevent cin from getting overloaded
        
        if (option != 1 && option != 2 && option != 3 && option != 4) //If the user selects anything other than 1 2 3 or 4, throw an error
        {
            cout << "Invalid input." << endl;
        }
        
        else if (option == 4) //If the user selects four, quit the program
        {
            cout << "Good bye!" << endl;
        }
        else //In all other cases (1,2,3)
        {
            switch (option) //Switch statement to keep track of the user inputs
            {
                case 1: //If the user selects option 1
                {
                    string fileName = ""; //Create a filename variable to track the users selection of filename
                    int numBooksStored = numBooks; //Create a numBooksStored variable for use in the readBooks function
                    int size = 51; //The size of the arrayOfBooks library should be 51 to make sure the array isn't overloaded
                    cout << "Enter a book file name: " << endl; //Prompt the user to enter a filename
                    getline(cin, fileName); //Loop through the lines in the input file to prenvent an infinite loop
                    numBooks = readBooks(fileName,arrayOfBooks,numBooksStored,size); //numBooks should equal the number of lines after readBooks is executed
                    
                    if (numBooks == -2) //If numBooks is negative two, print an error
                    {
                        cout << "Database is already full. No books were added." << endl;
                        continue;
                    }
                    
                    if (numBooks == -1) //If numBooks is negative one, print an error
                    {
                        cout << "No books saved to the database." << endl;
                        continue;
                    }
                    
                    if (numBooks == size) //If numBooks = size, then the array of Books is full
                    {
                        cout << "Database is full. Some books may have not been added." << endl;
                        continue;
                    }
                    
                    else //Print out the total number of books in the database
                    {
                        cout << "Total books in the database: " << numBooks << endl;
                    }
                    break;
                }
                
                case 2: //If the user selects option two
                {
                    int numOfBooks = numBooks; //Create a numOfBooks variable to keep track of the number of books in the library
                    printAllBooks(arrayOfBooks, numOfBooks); //Run the printAllBooks function
                    break;
                }
                
                case 3: //If the user selects optiion three
                {
                    string authorName = ""; //Create a variable to store the author's name
                    cout << "Enter name of author: " << endl; //Prompt the user to enter the name of an author
                    
                    getline(cin, authorName); //Run through the fileName previously given in option 1
                    
                    printBooksByAuthor(arrayOfBooks, numBooks, authorName); //Run the printBooksByAuthor function to print the books by the given author in the input file
                    break;
                }
            }
        }
        
    }
}

int main()
{ 
    //Run the hw6() function
    hw6();
}