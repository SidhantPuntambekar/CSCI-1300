//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 3 - Problem 2

#include <iostream>
using namespace std;

void checkEqual(int x, int y, int z) //This function/algorithm checks whether a set of three input integers are the same or different
{
    if (x == y && y == z && z == x)
    {
        cout << "All same" << endl; //If all three integers are the same, print "All same"
    }
    else if (x == y || y == z || x == z)
    {
        cout << "Neither" << endl; //If two of the integers are the same, print "Neither"
    }
    else
    {
        cout << "All different" << endl; //In all other cases, print "All different"
    }
}

int main()
{
    //Test case 1
    //Expected output
    //All different
    checkEqual(1,2,3);
    
    //Test case 2
    //Expected output
    //Neither
    checkEqual(1,1,2);
    
    //Test case 3
    //Expected output
    //All same
    checkEqual(2,2,2);
}