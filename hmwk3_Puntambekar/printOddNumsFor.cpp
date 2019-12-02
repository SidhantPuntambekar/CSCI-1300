//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 3 - Problem 9

#include <iostream>
using namespace std;

void printOddNumsFor(int maxValue) //This function prints odd numbers until a maximum value using a for loop
{
    for (int n = 1; n <= maxValue; n++) //Until n <= maxValue
    {
        if (n % 2 == 1) //If n is odd
        {
            cout << n << endl; //Print n
        }
    }
}

int main()
{
    //Test case 1
    //Expected output
    // 1 3 5
    printOddNumsFor(5);
    
    //Test case 2
    //Expected output
    // 1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37
    printOddNumsFor(37);
}