//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Project 2 - Problem 3 & 4 Code Runner

#include <iostream>
#include <math.h>
#include "Library.h"
#include "user.h"
#include "book.h"
#include <fstream>
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

string toLowerCase(string stringName) //Lower case function to prevent case sensitivity of the titleOfBook and username
{
    for (int i = 0; i < stringName.length(); i++)
    {
        stringName[i] = tolower(stringName[i]);
    }
    return stringName;
}

Library::Library() //Constructs a Library object as a default constructor
{
    numBooks = 0;
    numUsers = 0;
}

int Library::getSizeBook() //Get size of the books array
{
    return sizeBook;
}

int Library::getSizeUser() //Get size of the users array
{
    return sizeUser;
}

int Library::getNumBooks() //Get the current number of books
{
    return numBooks;
}

int Library::getNumUsers() //Get the current number of users
{
    return numUsers;
}

int Library::readBooks(string fileName) //This algorithm takes a filename of books and reads the books and stores them in the books array
{
    ifstream books(fileName); //Open an input string for the input filename
    string storageArray[2]; //Create a storage array variable to be stored in split containing one title and one author
    string line = ""; //Create a string variable to keep track of the line in the file
    if (numBooks == sizeBook) //If the numBooksStored is equal to the size of the array, return -2
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
            if (numBooks < sizeBook) //If the numBooksStored is less than the size of the array
            {
                arrayOfBooks[numBooks] = Book(storageArray[1],storageArray[0]);
                numBooks++; //Increment numBooksStored by one
            }
        }
    }
    return numBooks; //Return the number of books stored
}

void Library::printAllBooks() //This algorithm prints all of the books currently stored in the books array
{
    string fileName; //Create a filename variable to keep track of filename
    int numBooksStored; //Create a numBooksStored variable
    int size; //Declare the size of the authors and titles array
    if (numBooks <= 0) //If the numOfBooks is less than or equal to zero, no books are stored 
    {
        cout << "No books are stored" << endl;
    }
    else //If numOfBooks is greater than zero
    {
        cout << "Here is a list of books" << endl; //Print a list of books
        for (int i = 0; i < numBooks; i++) // Print the titles and authors at index i
        {
            cout << arrayOfBooks[i].getTitle() << " by " << arrayOfBooks[i].getAuthor() << endl;
        }
    }
}

void Library::printBooksByAuthor(string authorName) //This algorithm prints all the books in the books array in the library by author
{
    if (numBooks <= 0) //If the numBooks is less than or equal to zero, no books are stored
    {
        cout << "No books are stored" << endl;
    }
    
    if (numBooks > 0) //If the number of books is greater than zero
    {
        int count = 0; //Declare a count variable to keep track of number of books by author
        for (int i = 0; i < numBooks; i++) //Loop through the number of books and search for books by author
        {
            if (arrayOfBooks[i].getAuthor() == authorName) //If the author at index i == authorName, increment count by 1
            {
                count++;
            }
        }
        if (count > 0) //If count is greater than zero
        {
            cout << "Here is a list of books by " << authorName << endl; //Print "Here is a list of books by"
            for (int j = 0; j < numBooks; j++) //Loop through the number of books
            {
                if (arrayOfBooks[j].getAuthor() == authorName) //If the author at index j is the same as authorName, print out the title of book at j
                {
                    cout << arrayOfBooks[j].getTitle() << endl;
                }
            }
        }
        else //If no books exist by the author, then print that there are no books by authorName
        {
            cout << "There are no books by " << authorName << endl;
        }
    }
}

int Library::readRatings(string fileName) //This algorithm reads ratings from a ratings file and stores it in a ratings array
{
    
    ifstream File(fileName); //Defining file variable and opening it
    if (numUsers == sizeUser) //If numUsers is equal to size, return -2
    {
        return -2;
    }

    else if (!File.is_open()) //If file failed open, return -1
    { 
        return -1;
    }
    
    else //If the file opens
    {
        string line = ""; //Define line to keep track of lines in file
        int i = numUsers; //Set i equal to numUsers
        int splitCount = 0; //Tracks return value of split
        
        while (getline(File, line) && i < sizeUser) //looks up each line until max row limit is reached
        { 
            if ( line != "") //Skip empty lines
            {
                string storageArray[sizeUser]; //Define storage Array 
                splitCount = split(line, ',', storageArray, sizeUser); //Run split function to split ratings file
            
                arrayOfUsers[i].setUsername(storageArray[0]); //Update username
                for (int j = 0; j < splitCount-1; j++) //Update each column with integer
                { 
                    arrayOfUsers[i].setRatingAt(j, stoi(storageArray[j+1]));
                }
                i++; //Increment i by one
                numUsers++; //Add one to numUsers
            }
        }
        return numUsers; //Return the number of users
    }
    File.close(); //Close the file stream
}

int Library::getRating(string userName, string bookTitle) //This algorithm gets the rating of user for a specific title
{
    bool foundUser = false; //Bool variable to track if user is found
    bool foundBook = false; //Same as above except for book
    int userIndex = 0; //Set userIndex equal to zero
    int bookIndex = 0; //Set the bookIndex equal to zero
    
    for (int i = 0; i < numUsers; i++) //If the username matches the one found in the users array, 
    {
        if (toLowerCase(arrayOfUsers[i].getUsername()) == toLowerCase(userName))
        {
            foundUser = true; //Update foundUser to true
            userIndex = i; //UserIndex should equal i
        }
    }
    
    for (int j = 0; j < numBooks; j++) //Loop through the books array and get the title and if the input title and title in ther books array match
    {
        if (toLowerCase(arrayOfBooks[j].getTitle()) == toLowerCase(bookTitle))
        {
            foundBook = true; //Update foundUser to true
            bookIndex = j; //BookIndex should equal j
        }
    }
    
    if (foundBook && foundUser) //If both foundBook and foundUser are true
    {
        return arrayOfUsers[userIndex].getRatingAt(bookIndex); //Return the rating
    }
    
    else //In all other cases, return -3
    {
        return -3;
    }
}

int Library::getCountReadBooks(string username) //This algorithm counts the number of books the user has rated
{
    int userCount = 0; //Count the number of users in the users array
    int rating = 0; //Store the user's rating
    int indexOfUser = 0; //Index of the user in the users array
    int ratingCount = 0; //Count how many times the user has rated a book
    
    if (numBooks == 0) //If there are no books, return -3
    {
        return -3;
    }
    
    for (int i = 0; i < numUsers; i++) //Loop through the numUsers and find if the username in the users array equals the input to the getCountReadBooks function
    {
        if (toLowerCase(arrayOfUsers[i].getUsername()) == toLowerCase(username))
        {
            userCount++; //Increment userCount by one
            indexOfUser = i; //Set indexOfUser equal to i
        }
    }
    
    if (userCount == 0) //If there are no users found, return -3
    {
        return -3;
    }
    
    if (numUsers > 0) //If numUsers is greater than zero, 
    {
        for (int j = 0; j < numBooks; j++) //Loop through the numBooks 
        {
            rating = arrayOfUsers[indexOfUser].getRatingAt(j); //Set rating equal to the getRatingAt of users[indexOfUser]
            if (rating != 0) //If the rating is non zero
            {
                ratingCount++; //Add one to rating count
            }
        }
        return ratingCount; //Return rating count
    }

    if (ratingCount == 0) //If rating count is zero, return zero
    {
        return 0;
    }
    
    return -3; //In all other cases return -3
}

void Library::viewRatings(string UserName, int minRatingValue) //This algorithm allows a user to view their ratings for books above a certain value
{
    bool foundUsers = false; //Set foundUser to false
    int userIndex = 0; //Set userIndex equal to zero
    int readCount = 0; //Set readCount equal to zero
    
    for (int k = 0; k < numUsers; k++) //If the username matches the one found in the users array 
    {
        if (toLowerCase(arrayOfUsers[k].getUsername()) == toLowerCase(UserName))
        {
            foundUsers = true; //Update foundUsers to true
            userIndex = k; //Set user index equal to k
        }
    }
    
    if (foundUsers == false) //If the user is not found, then it doesn't exist in the database
    {
        cout << UserName << " does not exist." << endl;
        return;
    }
    
    for (int i = 0; i < numBooks; i++) //Loop through numBooks and get the user rating at each i that is above the minRatingValue
    {
        if (arrayOfUsers[userIndex].getRatingAt(i) != 0 && arrayOfUsers[userIndex].getRatingAt(i) >= minRatingValue) //If the rating is not zero, and is greater than or equal to the min value, add one to readCount
        {
            readCount++;
        }   
    }
    
    if (readCount == 0) //If the user has not rated any books
    { 
        cout << UserName << " has not rated any books yet." << endl; //Print username has not rated any books yet.
    }
    
    else
    {
        cout << "Here are the books that " << UserName << " rated" << endl; //Print the books that the user has rated
        for (int j = 0; j < numBooks; j++) //Loop through the users and get the rating
        {
            if (arrayOfUsers[userIndex].getRatingAt(j) != 0 && arrayOfUsers[userIndex].getRatingAt(j) >= minRatingValue) //If the user's rating is not zero and above the min value
            {
                cout << "Title : " << arrayOfBooks[j].getTitle() << endl; //Print title
                cout << "Rating : " << arrayOfUsers[userIndex].getRatingAt(j) << endl; //Print rating
                cout << "-----" << endl; //Print divider
            }
        }
    }
}

double Library::calcAvgRating(string BookTitle) //This algorithm calculates the average rating for a certain title
{
    bool foundBook = false;
    int bookIndex = 0;
    int sum = 0.0; //Value to hold sum of ratings
    double average = 0.0; //Average of the user ratings
    int count = 0; //Number of ratings
    
    for (int j = 0; j < numBooks; j++) //Loop through the books array and get the title and if the input title and title in ther books array match
    {
        if (toLowerCase(arrayOfBooks[j].getTitle()) == toLowerCase(BookTitle))
        {
            foundBook = true; //Update foundUser to true
            bookIndex = j; //BookIndex should equal j
        }
    }
    
    if (foundBook == false)
    {
        //cout << BookTitle << " does not exist in the database" << endl; //Title does not exist
        return -3;  //Return the val -3
    }
    
    for (int k = 0; k < numUsers; k++) //Loop through the users array and find the get the rating of each book from each user
    {
        double temp = arrayOfUsers[k].getRatingAt(bookIndex); //Store the rating of each book per user in a temp var
        if (temp != 0) //If the rating is not zero, add it to sum and increment count by 1
        {
            sum += temp;
            count++;  
        }
        else //Continue
        {
            ;
        }
    }
    
    if (count == 0) //If all users rated book title as zero, return zero
    {
        return 0;
    }
    
    average = (double) sum/count; //Calculate the average of the ratings for the book title
    return average; //Return the average
}

double Library::calcAvgRatingByAuthor(string author) //This algorithm calculates the average rating for a particular author
{
    bool foundAuthor = false; //Set foundAuthor to false
    double sum = 0; //Set sum to zero
    double average = 0; //Set average to zero
    int count = 0; //Set count to zero
    
    for (int k = 0; k < numBooks; k++) //Find the author index in the books array
    {
        if (toLowerCase(arrayOfBooks[k].getAuthor()) == toLowerCase(author))
        {
            foundAuthor = true;
        }
    }
    
    if (numUsers <= 0 || numBooks <= 0 || foundAuthor == false) //If the author is not found, return -3
    {
        return -3;
    }
    else //In all other cases
    {
        for (int i = 0; i < numBooks; i++) //Loop through the books array and get the title and if the input title and title in ther books array match
        {
            if (toLowerCase(arrayOfBooks[i].getAuthor()) == toLowerCase(author)) //Check case insensitivity
            {
                for (int j = 0; j < numUsers; j++) //Loop through users array
                {
                    if (arrayOfUsers[j].getRatingAt(i) != 0) //If the rating for the user for that author is not zero, add to sum and increment count by one
                    {
                        sum = sum + arrayOfUsers[j].getRatingAt(i);
                        count++;
                    }
                }
            }
        }
    }
    
    if (count != 0) //If the count does not equal zero, calculate the average
    {
        average = sum/count;
    }
    else //Else the average is zero
    {
        average = 0;
    }
    return average; //Return average
}

int Library::addUser(string newUsername) //This algorithm adds a user to the user array
{
    int count = 0; //Set count to zero
    int idx = 0; //Set index to zero
    
    if (numUsers == sizeUser) //If numUsers is equal to size, return -2
    {
        return -2;
    }
    
    else //In all other cases
    {
        bool match = false;
        for (int i = 0; i < numUsers; i++) //Find if the user already exists in the database 
        {
            if (toLowerCase(arrayOfUsers[i].getUsername()) == toLowerCase(newUsername))
            {
               return 0;
               match = true;
            }
        }
        
        if (match == false) //If the user doesn't exist in the user array currently
        {
            arrayOfUsers[numUsers].setUsername(newUsername); //Set the new username in the user array
            for (int j = 0; j < sizeBook; j++) //Loop through size books and set the users new ratings to zero
            {
                arrayOfUsers[numUsers].setRatingAt(j,0); 
            }
            numUsers++; //Increment numUsers by one
            return 1; //Return 1
        }
    }
}

int Library::checkOutBook(string username, string title, int newRating) //This algorithm checks out a book from the library
{
    bool isCheckedOut = true; //isCheckedOut is set to true
    bool foundUser = false; //Found user
    bool foundBook = false; //Found book
    int userIndex = 0; //User index in the user array
    int bookIndex = 0; //Book index found in the book array
    
    for (int i = 0; i < numUsers; i++) //Loop through numUsers
    {
        if (toLowerCase(arrayOfUsers[i].getUsername()) == toLowerCase(username)) //If the username matches the one in the user array
        {
            isCheckedOut = false; //Set isCheckedOut to false
            foundUser = true; //Set found user to true
            userIndex = i; //Set the user index to i
        }
    }
    
    for (int j = 0; j < numBooks; j++) //Loop through books array
    {
        if (toLowerCase(arrayOfBooks[j].getTitle()) == toLowerCase(title)) //If the book matches the one in the book array
        {
            isCheckedOut = false; //Set isCheckedOut to false 
            foundBook = true; //Set foundBook to true
            bookIndex = j; //Set bookIndex to j
        }
    }
    
    if (newRating < 0 || newRating > 5) //If the rating is not valid, throw an error
    {
        return -4;
    }

    if (foundUser == false || foundBook == false) //If the user or the book is not found, throw an error
    {
        return -3;
    }
    
    else //In all other cases
    {
        if (arrayOfUsers[userIndex].setRatingAt(bookIndex, newRating) == true) //If setRatingAt for the user comes back true
        {
            arrayOfUsers[userIndex].setRatingAt(bookIndex, newRating); //Set the new rating in the user array for the book
            return 1; //Return 1
        }
    }
    return -4; //In all other cases return -4
}

void Library::getRecommendations(string userName) //This algorithm gets reading recommendations for users of the library
{
    int userIndex = -1; //Set the userIndex to -1 outside of the bounds of the array
    int mostSimilarUser = 0; //Set the mostSimilarUser to zero
    int ssd = 0; //Set ssd to zero
    int lowestSSD = 999999; //Set the lowest ssd to 999999
    int numBooksRecommended = 0; //Set numBooksRecommended equal to zero
        
    for (int i = 0; i < numUsers; i++) //Loop through the user array and find the user
    {
        if (toLowerCase(arrayOfUsers[i].getUsername()) == toLowerCase(userName))
        {
            userIndex = i; //Set the userIndex equal to i
            break;
        }
    }
    
    if (userIndex == -1) //If the userIndex equals -1, the user doesn't exist in the library
    {
        cout << userName << " does not exist." << endl;
        return;
    }
    
    for (int j = 0; j < numUsers; j++) //Loop through the arrayOfUsers
    {
        if (j != userIndex) //If j does not equal the user index
        {
            ssd = 0; //Set the ssd equal to zero
            
            for (int k = 0; k < numBooks; k++) //Calculate new ssd given formula
            {
                ssd += pow(arrayOfUsers[userIndex].getRatingAt(k) - arrayOfUsers[j].getRatingAt(k), 2);
            }

            if (ssd < lowestSSD && getCountReadBooks(arrayOfUsers[j].getUsername()) > 0) //If ssd is less than lowestSSD and getCountReadBooks is greater than zero
            {
                // record the index of this "most similar user"
                lowestSSD = ssd; //Set the lowestSSD equal to ssd
                mostSimilarUser = j; //Set the mostSimilarUser equal to j
            }
        }
    }
    
    for (int l = 0; l < numBooks; l++) //Loop through the arrayOfBooks
    {
        if ((arrayOfUsers[userIndex].getRatingAt(l) == 0 || arrayOfUsers[userIndex].getRatingAt(l) == -1) && numBooksRecommended < 5 && arrayOfUsers[mostSimilarUser].getRatingAt(l) >= 3) //If the rating of the user is equal to 0 or -1 and numBooksRecommended is less than 5 and the getRating of most similar user is greater than 3
        {
            
            numBooksRecommended++; //Add one to numBooksRecommended
            if(numBooksRecommended == 1) //If the numBooksRecommended is equal to 1
            {
                cout << "Here is the list of recommendations " << endl; //Output the recommendations for the user
            }
            cout << arrayOfBooks[l].getTitle() << " by " << arrayOfBooks[l].getAuthor() << endl;
        }
    }
    
    if (numBooksRecommended == 0) //If the numBooksRecommended is zero, then there are no recommendations for the user
    {
        cout << "There are no recommendations for " << userName << " at present." << endl;
    }
}