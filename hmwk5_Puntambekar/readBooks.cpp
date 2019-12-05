//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 5 - Problem 2

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

int main()
{
    //Test case 1
    //Expected output
    /*
    50
    Douglas Adams
    Richard Adams
    Mitch Albom
    Laurie Halse Anderson
    Maya Angelou
    Jay Asher
    Isaac Asimov
    Ann Brashares
    Libba Bray
    Dan Brown
    Meg Cabot
    Orson Scott Card
    Tom Clancy
    Suzanne Collins
    F. Scott Fitzgerald
    John Flanagan
    Cornelia Funke
    William Gibson
    William Golding
    William Goldman
    James Gurney
    Will Hobbs
    Alice Hoffman
    Aldous Huxley
    Guy Gavriel Kay
    Daniel Keyes
    Patrice Kindl
    Masashi Kishimoto
    Tite Kubo
    Elizabeth Laird
    Harper Lee
    C S Lewis
    Robert Ludlum
    Yann Martel
    J R R Tolkien
    Stephenie Meyer
    Garth Nix
    George Orwell
    Christopher Paolini
    Gary Paulsen
    J R R Tolkien
    Philip Pullman
    J.K. Rowling
    Louis Sachar
    Shueisha
    Neil Shusterman
    Jeff Smith
    Art Spiegelman
    Amy Tan
    J R R Tolkien
    The Hitchhiker's Guide To The Galaxy
    Watership Down
    The Five People You Meet in Heaven
    Speak
    I Know Why the Caged Bird Sings
    Thirteen Reasons Why
    Foundation Series
    The Sisterhood of the Travelling Pants
    A Great and Terrible Beauty
    The Da Vinci Code
    The Princess Diaries
    Ender's Game
    The Hunt for Red October
    The Hunger Games
    The Great Gatsby
    Ranger's Apprentice Series
    Inkheart
    Neuromancer
    Lord of the Flies
    The Princess Bride
    Dinotopia: A Land Apart from Time
    Far North
    Practical Magic
    Brave New World
    The Summer Tree
    Flowers For Algernon
    Owl in Love
    Naruto
    Bleach (graphic novel)
    Kiss the Dust
    To Kill a Mockingbird
    The Lion the Witch and the Wardrobe
    The Bourne Series
    Life of Pi
    The Silmarillion
    Twilight Series
    Sabriel
    Nineteen Eighty-Four (1984)
    Eragon
    Hatchet
    The Fall of Gondolin
    The Golden Compass
    Harry Potter Series
    Holes
    Shonen Jump Series
    The Shadow Club
    Bone Series
    Maus: A Survivor's Tale
    The Lord of the Rings
    */
    string authors[50] = {};
    string titles[50] = {};
    cout << readBooks("testCase1Problem2.txt", titles, authors, 0, 50) << endl;
    printArray(authors,50);
    printArray(titles,50);
    
    //Test case 2
    //Expected output
    /*
    2
    Author A
    Author B
    Book 1
    Book 2
    */
    string authors1[10] = {};
    string titles1[10] = {};
    cout << readBooks("testCase2Problem2.txt",titles1,authors1, 0, 10) << endl;
    printArray(authors1,50);
    printArray(titles1,50);
    
}