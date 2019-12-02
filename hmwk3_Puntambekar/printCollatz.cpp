//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 3 - Problem 7

#include <iostream>
using namespace std;

void printCollatz(int startingTerm) //This function/algorithm takes in a starting term of the Collatz sequence and then prints the consecutive terms until it reaches 1
{
    if (startingTerm <= 0) //Throw error if startingTerm is less than 0
        {
            cout << "invalid number"; 
        }
        
    else //In all other valid cases
    {
       while (startingTerm != 1) //Repeat until startingTerm is equal to 1
        {
            cout << startingTerm << " "; //Print out a space
            
            if (startingTerm & 1)
            {
                startingTerm = 3*startingTerm + 1; // If startingTerm is odd, multiply it by 3 and add 1
            }
            
            else
            {
                startingTerm = startingTerm/2; // If startingTerm is even, divide it by two
            }
        } 
        cout << startingTerm << endl; // Print 1 at the end
    }
}

int main()
{
    //Test case 1
    //Expected output
    //6 3 10 5 16 8 4 2 1
    printCollatz(6);
    
    //Test case 2
    //Expected output
    //4 2 1
    printCollatz(4);
    
    //Test case 3
    //Expected output
    //invalid number
    printCollatz(-5);
}