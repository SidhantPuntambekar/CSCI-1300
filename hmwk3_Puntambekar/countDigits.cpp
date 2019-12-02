//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 3 - Problem 4

#include <iostream>
#include <string>
using namespace std;

int countDigits(int n) //This algorithm counts the number of digits in a certain number
{
    if (n < 0) //if n is less than zero, multiply it by negative 1
    {
        n *= -1;
    }
    
    string nString = to_string(n); //Convert input integer to string
    int count = 0; //Define a count variable to count digits
    
    for (int i = 0; i < nString.length(); i++) //Create a for loop to iterate through the string while counting digits
    {
        count++; //Add one to count
    }
    return count; //Return count
}

int main()
{
    //Test case 1
    //Expected output
    //6
    cout << countDigits(123326) << endl;
    
    //Test case 2
    //Expected output
    //3
    cout << countDigits(-123) << endl;
}