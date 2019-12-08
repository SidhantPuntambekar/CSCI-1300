//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 7 - Problem 1

#include <iostream>
using namespace std;
#ifndef BOOK_H
#define BOOK_H

class Book
{
    public:
    Book(); //Default constructor for the book object. Initliazes all parameters to zero by default
    Book(string titleName, string authorName); //Parametrized constructor constructs Book objects
    string getTitle(); //Returns the title of the book object
    void setTitle(string newTitle); //Set the title of the book object with a newTitle
    string getAuthor(); //Get the author of the book object
    void setAuthor(string newAuthor); //Set the author of the book object with a newAuthor
    
    private:
    string title; //Keeps track of title of book object
    string author; //Keeps track of author of the book object
};

#endif