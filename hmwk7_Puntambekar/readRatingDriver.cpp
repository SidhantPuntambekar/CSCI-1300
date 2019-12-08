//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 7 - Problem 2

#include <iostream>
#include "user.h"
using namespace std;

int main()
{
    //Test case 1
    //Expected output
    //Function returned value: 3
    User users[10];
    
    int numUsers = 0;
    int maxRows = 10;
    int maxColumns = 50;
    
    numUsers = readRatings("testCase1Problem5Ratings.txt", users, numUsers, maxRows, maxColumns);
    
    cout << "Function returned value: " << numUsers << endl;
    
    //Test case 2
    //Expected output
    //Function returned value: 4
    User users1[10];
    
    int numUsers1 = 0;
    int maxRows1 = 10;
    int maxColumns1 = 50;
    
    numUsers1 = readRatings("testCase2Problem5Ratings.txt", users1, numUsers1, maxRows1, maxColumns1);
    
    cout << "Function returned value: " << numUsers1 << endl;
    
}