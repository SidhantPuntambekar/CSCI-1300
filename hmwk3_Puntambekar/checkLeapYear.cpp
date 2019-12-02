//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 3 - Problem 6

#include <iostream>
using namespace std;

bool checkLeapYear(int year) //This function checks if an input year is a leap year
{
    bool isLeapYear = false; //Set value of isLeapYear to false
    
    if ((((year % 4 == 0 && year % 100!=0) || (year % 400 == 0)) && (year >= 1582)) || (year < 1582 && year % 4 == 0)) //Checks to see whether the year is divisible by 4 and not by 100 or if year is divisible by 400 and if year is greater than 1582 (Gregorian correction)
    {
        isLeapYear = true; //Sets value of isLeapYear to true
    }
    return isLeapYear; //Return isLeapYear
}

int main()
{
    //Test case 1
    //Expected output
    //1
    cout << checkLeapYear(2000) << endl;
    
    //Test case 2
    //Expected output
    //0
    cout << checkLeapYear(1900) << endl;
    
    //Test case 3
    //Expected output
    //0
    cout << checkLeapYear(1995) << endl;
    
    //Test case 4
    //Expected output
    //1
    cout << checkLeapYear(1500) << endl;
}