//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 7 - Problem 4

#include <iostream>
using namespace std;

string toLowerCase(string stringName) //Make the input string case insensitive by lowering to lower case
{
    for (int i = 0; i < stringName.length(); i++)
    {
        stringName[i] = tolower(stringName[i]);
    }
    return stringName;
}

int getCountReadBooks(string username, User users[], int numUsers, int numBooks) //This algorithm finds out how many ratings the user has given for all books
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
        if (toLowerCase(users[i].getUsername()) == toLowerCase(username))
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
            rating = users[indexOfUser].getRatingAt(j); //Set rating equal to the getRatingAt of users[indexOfUser]
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