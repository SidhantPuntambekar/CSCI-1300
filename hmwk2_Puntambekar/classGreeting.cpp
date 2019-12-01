// CS1300 Fall 2019
// Author: Sidhant Puntambekar
// Recitation: 304 – Reddy
// Homework 2 - Problem #3

#include <iostream> //Include input output stream
using namespace std; //Use namespace standard

void classGreeting(int courseNumber)
{
    cout << "Hello, CS " << courseNumber << " World!" << endl; //Take the input course number and output a class greeting
}


int main()
{
    //Test case 1
    //Expected output
    // "Hello CS 1300 World!"
    classGreeting(1300);
    
    //Test case 2
    //Expeceted output
    // Hello CS 2270 World!
    classGreeting(2270);
}