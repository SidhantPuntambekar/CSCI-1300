//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 7 - Problem 4

#include "book.h"
#include "user.h"
#include <iostream>
using namespace std;

int main()
{
    //Test case 1
    //Expected output 
    //-3
    User users[2];
    
    users[0].setUsername("User1");
    users[0].setNumRatings(2);
    users[0].setRatingAt(0,2);
    users[0].setRatingAt(1,2);
    
    
    users[1].setUsername("User2");
    users[1].setNumRatings(4);
    users[1].setRatingAt(0,4);
    users[1].setRatingAt(1,4);
    
    cout << getCountReadBooks("User4", users,3,3) << endl;
    
    //Test case 2
    //Expected output
    //2
    cout << getCountReadBooks("User2",users,3,3) << endl;
}