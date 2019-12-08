//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 7 - Problem 5

#include "user.h"
#include "book.h"
#include <iostream>
using namespace std;

int main()
{
    //Test case 1
    //Expected output
    // 3
    //Create list of books
    Book books[2];
    books[0].setTitle("Title1");
    books[0].setAuthor("Author1");
    books[1].setTitle("Title2");
    books[1].setAuthor("Author2");
    //Create list of users
    User users[2];
    //Setting username and ratings for User1
    users[0].setUsername("User1");
    users[0].setNumRatings(2);
    users[0].setRatingAt(0,2);
    users[0].setRatingAt(1,2);
    //Setting username and ratings for User2
    users[1].setUsername("User2");
    users[1].setNumRatings(4);
    users[1].setRatingAt(0,4);
    users[1].setRatingAt(1,4);
    // calcAvgRating for Title2
    cout << calcAverageRating(users, books, 2, 2,"title2");
    
    //Test case 2
    //Expected output
    // 3
    Book books1[2];
    books1[0].setTitle("Title1");
    books1[0].setAuthor("Author1");
    books1[1].setTitle("Title2");
    books1[1].setAuthor("Author2");
    //Create list of users
    User users1[2];
    //Setting username and ratings for User1
    users1[0].setUsername("User1");
    users1[0].setNumRatings(2);
    users1[0].setRatingAt(0,2);
    users1[0].setRatingAt(1,2);
    //Setting username and ratings for User2
    users1[1].setUsername("User2");
    users1[1].setNumRatings(4);
    users1[1].setRatingAt(0,4);
    users1[1].setRatingAt(1,4);
    
    cout << calcAverageRating(users1,books1,2,2,"title1");
}