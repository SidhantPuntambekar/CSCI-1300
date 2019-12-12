//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Project 2 - Problem 3 & 4 Code Runner

#include <iostream>
#include "user.h"
#include "book.h"
using namespace std;

#ifndef LIBRARY_H
#define LIBRARY_H

class Library
{
    public:
    Library(); //Default constructor for the library class
    int getSizeBook(); //Return private instance data member sizeBook
    int getSizeUser(); //Return private instance data member sizeUser
    int getNumBooks(); //Return private instance data member numBooks
    int getNumUsers(); //Return private instance data member numUsers
    int readBooks(string fileName); //Read books function
    void printAllBooks(); //Print all books in Library
    void printBooksByAuthor(string authorName); //Print books by a specific author
    int readRatings(string filename); //Read ratings function
    int getRating(string userName, string bookTitle); //Get a user's rating
    int getCountReadBooks(string username); //Get the number of books a user has rad
    void viewRatings(string UserName, int minRatingValue); //View a user's ratings
    double calcAvgRating(string BookTitle); //Caclulate average of user's ratings
    double calcAvgRatingByAuthor(string author); //Calculate average rating by author
    int addUser(string newUsername); //Add a user to the library
    int checkOutBook(string username, string title, int newRating); //Check out a book from the library
    void getRecommendations(string userName); //Get recommendations for the user
    
    private:
    const int sizeBook = 50; //Size of the books array
    const int sizeUser = 100; //Size of the user array
    Book arrayOfBooks[50]; //Book array
    User arrayOfUsers[100]; //Array of users
    int numBooks; //Num books
    int numUsers; //Num users
    
};

#endif