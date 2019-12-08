//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 7 - Problem 3

#include <iostream>
using namespace std;

string toLowerCase(string stringName) //Lower case function to prevent case sensitivity of the titleOfBook and username
{
    for (int i = 0; i < stringName.length(); i++)
    {
        stringName[i] = tolower(stringName[i]);
    }
    return stringName;
}

int getRating(string username, string titleOfBook, User users[], Book books[], int numUsers, int numBooks) //This algorithm returns the rating that the user gave for that book.
{
    bool foundUser = false; //bool variable to track if user is found
    bool foundBook = false; //Same as above except for book
    int userIndex = 0; //Set userIndex equal to zero
    int bookIndex = 0; //Set the bookIndex equal to zero
    
    for (int i = 0; i < numUsers; i++) //If the username matches the one found in the users array, 
    {
        if (toLowerCase(users[i].getUsername()) == toLowerCase(username))
        {
            foundUser = true; //Update foundUser to true
            userIndex = i; //UserIndex should equal i
        }
    }
    
    for (int j = 0; j < numBooks; j++) //Loop through the books array and get the title and if the input title and title in ther books array match
    {
        if (toLowerCase(books[j].getTitle()) == toLowerCase(titleOfBook))
        {
            foundBook = true; //Update foundUser to true
            bookIndex = j; //BookIndex should equal j
        }
    }
    
    if (foundBook && foundUser) //If both foundBook and foundUser are true
    {
        return users[userIndex].getRatingAt(bookIndex); //Return the rating
    }
    
    else //In all other cases, return -3
    {
        return -3;
    }
}