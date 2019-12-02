//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 3 - Problem 1

#include <iostream>
using namespace std; 

int collatzStep(int n) //This function/algorithm finds the next number in the Collatz sequence given an input integer of n
{
    if (n < 0) 
    {
        return 0; // If number is negative, return 0
    }
    else if (n % 2 == 0) 
    {
        return n/2; //Else if number is even, return n/2
    }
    else if (n % 2 == 1) 
    {
        return 3*n+1; //Else if number is odd, return 3n+1
    }
}

int main()
{
    //Test case 1
    //Expected Output
    //22
    cout << collatzStep(7) << endl;
    
    //Test case 2
    //Expected Output
    //2
    cout << collatzStep(4) << endl;
    
    //Test case 3
    //Expected output
    //0
    cout << collatzStep(-1000000) << endl;
}