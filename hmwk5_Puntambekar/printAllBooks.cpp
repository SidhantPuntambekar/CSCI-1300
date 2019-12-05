//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 5 - Problem 3

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

void printArray(string array[], int arrayLength) //Function to print array
{
    for (int i = 0; i < arrayLength; i++)
    {
        cout << array[i] << endl;
    }
}

void printAllBooks(string titles[], string authors[], int numOfBooks)
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
            cout << titles[i] << " by " << authors[i] << endl;
        }
    }
}

int main()
{
    //Test case 1
    //Expected output
    /*
    Here is a list of books
    The Hitchhiker's Guide To The Galaxy by Douglas Adams
    Watership Down by Richard Adams
    The Five People You Meet in Heaven by Mitch Albom
    Speak by Laurie Halse Anderson
    I Know Why the Caged Bird Sings by Maya Angelou
    Thirteen Reasons Why by Jay Asher
    Foundation Series by Isaac Asimov
    The Sisterhood of the Travelling Pants by Ann Brashares
    A Great and Terrible Beauty by Libba Bray
    The Da Vinci Code by Dan Brown
    The Princess Diaries by Meg Cabot
    Ender's Game by Orson Scott Card
    The Hunt for Red October by Tom Clancy
    The Hunger Games by Suzanne Collins
    The Great Gatsby by F. Scott Fitzgerald
    Ranger's Apprentice Series by John Flanagan
    Inkheart by Cornelia Funke
    Neuromancer by William Gibson
    Lord of the Flies by William Golding
    The Princess Bride by William Goldman
    Dinotopia: A Land Apart from Time by James Gurney
    Far North by Will Hobbs
    Practical Magic by Alice Hoffman
    Brave New World by Aldous Huxley
    The Summer Tree by Guy Gavriel Kay
    Flowers For Algernon by Daniel Keyes
    Owl in Love by Patrice Kindl
    Naruto by Masashi Kishimoto
    Bleach (graphic novel) by Tite Kubo
    Kiss the Dust by Elizabeth Laird
    To Kill a Mockingbird by Harper Lee
    The Lion the Witch and the Wardrobe by C S Lewis
    The Bourne Series by Robert Ludlum
    Life of Pi by Yann Martel
    The Silmarillion by J R R Tolkien
    Twilight Series by Stephenie Meyer
    Sabriel by Garth Nix
    Nineteen Eighty-Four (1984) by George Orwell
    Eragon by Christopher Paolini
    Hatchet by Gary Paulsen
    The Fall of Gondolin by J R R Tolkien
    The Golden Compass by Philip Pullman
    Harry Potter Series by J.K. Rowling
    Holes by Louis Sachar
    Shonen Jump Series by Shueisha
    The Shadow Club by Neil Shusterman
    Bone Series by Jeff Smith
    The Joy Luck Club by Amy Tan
    The Lord of the Rings by J R R Tolkien
    */
    string authors[50] = {};
    string titles[50] = {};
    int nb = readBooks("testCase1Problem3.txt",titles,authors, 0, 50);
    printAllBooks(titles, authors, nb);
    
    //Test case 2
    //Expected output
    /*
    Book 1 by Author A
    Book 2 by Author B
    */
    string authors1[50] = {};
    string titles1[50] = {};
    int nb1 = readBooks("testCase2Problem3.txt",titles1,authors1, 0, 50);
    printAllBooks(titles1, authors1, nb1);
}