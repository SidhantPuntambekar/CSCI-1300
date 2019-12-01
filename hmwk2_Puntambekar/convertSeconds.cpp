// CS1300 Fall 2019
// Author: Sidhant Puntambekar
// Recitation: 304 – Reddy
// Homework 2 - Problem #7

#include <iostream>
#include <math.h>
using namespace std;

void convertSeconds(int seconds) //This algorithm converts a seconds input value to hours minutes and seconds
{
    int hour = seconds / (60*60); //Convert input of seconds to hours
    int minute = seconds / 60; //Convert input of seconds to minutes
    
    cout << int(hour) << " hour(s) " << int(minute % 60) << " minute(s) " << int(seconds % 60) << " second(s) " << endl; //Output hours minutes and seconds in format
}

int main()
{
    //Test case 1
    //Expected output
    // 1 hour(s) 1 minute(s) 11 second(s)
    convertSeconds(3671);
    
    //Test case 2
    //Expected output
    //1 hour(s) 6 minute(s) 40 second(s)
    convertSeconds(4000);
}