// CS1300 Fall 2019
// Author: Sidhant Puntambekar
// Recitation: 304 – Reddy
// Homework 9 - Problem #2

#include <iostream>
#include <string>
using namespace std;

string decimalToBinaryRecursive(int input) //This algorithm takes an integer input and converts it to a binary number in string form recursively
{
    int binary = 0; //Declare an int variable set it to zero
    string binaryOutput = ""; //Declare the output string for binary number
    if (input == 0) //Base case. If input is zero, then binary = 0
    {
        binary = 0;
    }
    else //Recursion
    {
        binary = (input % 2 + 10 * stoi(decimalToBinaryRecursive(input / 2))); //Set binary equal to input mod 2 + 10 * decimalToBinaryRecursive of input divided by 2
    }
    binaryOutput = to_string(binary); //Convert binary to a string
    return binaryOutput; //Return binaryOutput
}

int main()
{
    //Test case 1
    //Expected output
    //1000
    cout << decimalToBinaryRecursive(8) << endl;
    
    //Test case 2
    //Expected output
    //101
    cout << decimalToBinaryRecursive(5) << endl;
}