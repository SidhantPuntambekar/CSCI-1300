//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 3 - Problem 8

#include <iostream>
using namespace std;

void printOddNumsWhile(int maxValue) //This algorithm prints odd numbers until a max value using a while loop
{
    int n = 1; // Create a starting variable n with initialization of 1
    if (maxValue <= 0) //If the maxValue is negative, print nothing
    {
        cout << "";
    }
    
   else //In all other cases
   {
        cout << n << " " << endl; //Print out n with a space
        
        while (n < maxValue) //While n is less than maxValue
        {
            n++; //Add one to n
            if (n % 2 == 1) //If n is odd, print n
            {
                cout << n << " " << endl;
            }
        }
   }
}

int main()
{
    //Test case 1
    //Expected output
    //1 3 5
    printOddNumsWhile(5);
    
    //Test case 2
    //Expected output
    // 1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37
    printOddNumsWhile(37);
    
    //Test case 3
    //Expected output
    // 1 3 5 7 9
    printOddNumsWhile(10);
}