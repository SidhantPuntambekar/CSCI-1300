//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 7 - Problem 1

#include <iostream>
using namespace std;

//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Project 2 - Problem 2 Code Runner

#ifndef USER_H
#define USER_H

class User
{
    public:
    User(); //Default constructor, initializes all private instance data to null or zero
    User(string userName, int Ratings[], int numOfRatings); //Parametrized constructor constructs user object
    string getUsername(); //Returns the username of the user object
    void setUsername(string newUsername); //Set the username to a new username
    int getRatingAt(int index); //Get the rating at a specified index in the ratings array
    bool setRatingAt(int index, int newRating); //Set a new rating at index of ratings array
    int getNumRatings(); //Returns the numRatings
    void setNumRatings(int newNumRatings); //Set the numRatings to a new numRatings value
    int getSize(); //Return the size of the ratings array
    
    private:
    string username; //Username of the user
    int ratings[50]; //Ratings array for users
    int numRatings; //Number of ratings in the ratings array
    int size; //Size of the ratings array
};

#endif