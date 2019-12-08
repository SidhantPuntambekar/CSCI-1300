//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 7 - Problem 5

#include <iostream>
#include <cctype>
using namespace std;

string toLowerCase(string stringName) //Makes an input string lower case using the tolower function provided by #include <cctype>
{
    for (int i = 0; i < stringName.length(); i++)
    {
        stringName[i] = tolower(stringName[i]);
    }
    return stringName;
}

double calcAverageRating(User users[], Book books[], int numUsers, int numBooks, string titleOfBook) //This algorithm calculates the average rating of all users within a certain book title
{
    int indexOfBook = -3; //Default set indexOfBook to 3
    int sum = 0.0; //Value to hold sum of ratings
    double average = 0.0; //Average of the user ratings
    int count = 0; //Number of ratings

    if (numBooks == 0 || numUsers == 0) //If either the books or users zero, return -3
    {
        return -3;
    }
    
    for (int i = 0; i < numBooks; i++) //Loop through the books array and find the title of the book with case insensitivity and set indexOfBook to i
    {
        if (toLowerCase(books[i].getTitle()) == toLowerCase(titleOfBook)) //Checking lower case title
        {
            indexOfBook = i; //Setting indexOfBook to i
        }
        else //Continue
        {
            ;
        }
    }
    
    if (indexOfBook == -3) //If there is no book, return -3
    {
        return -3;
    }
    
    for (int j = 0; j < numUsers; j++) //Loop through the users array and find the get the rating of each book from each user
    {
        double temp = users[j].getRatingAt(indexOfBook); //Store the rating of each book per user in a temp var
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