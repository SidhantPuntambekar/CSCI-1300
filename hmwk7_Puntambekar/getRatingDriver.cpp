//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 7 - Problem 3

#include "book.h"
#include "user.h"
#include <iostream>
using namespace std;

int main()
{
    //Test case 1
    //Expected output
    // 4
    Book books[3];
    //Setting book title and author for book 1
    books[0].setTitle("Title1");
    books[0].setAuthor("Author1");
    //Setting book title and author for book 2
    books[1].setTitle("Title2");
    books[1].setAuthor("Author2");
    //Setting book title and author for book 3
    books[2].setTitle("Title3");
    books[2].setAuthor("Author3");
    
    User users[2];
    //Setting username and ratings for User1
    users[0].setUsername("User1");
    users[0].setNumRatings(3);
    users[0].setRatingAt(0,1);
    users[0].setRatingAt(1,4);
    users[0].setRatingAt(2,2);
    //Setting username and ratings for User2
    users[1].setUsername("User2");
    users[1].setNumRatings(3);
    users[1].setRatingAt(0,0);
    users[1].setRatingAt(1,5);
    users[1].setRatingAt(2,3);
    
    cout << getRating("User1", "Title2", users, books, 2, 3) << endl;
    
    //Test case 2
    //Expected output
    // -3
    cout << getRating("User4", "Title2", users, books, 2, 3) << endl;
}