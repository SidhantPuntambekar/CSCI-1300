// CS1300 Fall 2019
// Author: Sidhant Puntambekar
// Recitation: 304 – Reddy
// Homework 2 - Problem #2

/* This program takes in a CS course number from user input and then outputs the course number in a Hello World phrase */

#include <iostream> //include input output stream
using namespace std; //using namespace standard

int main()
{
    int courseNumber; //Define an integer variable called courseNumber to store user input of course number 
    cout << ("Enter a CS course number: ") << endl; //Ask the user to input a course number
    cin >> courseNumber; //Take user input from previous line and store it in courseNumber
    cout << "Hello, CS " << courseNumber << " World!" << endl; //Output courseNumber variable in a hello world statement
}