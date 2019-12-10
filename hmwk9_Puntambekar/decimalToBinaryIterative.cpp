// CS1300 Fall 2019
// Author: Sidhant Puntambekar
// Recitation: 304 – Reddy
// Homework 9 - Problem #1

#include <iostream>
using namespace std;

string decimalToBinaryIterative(int input) //This algorithm takes an integer input and converts it to a binary number in string form iteratively
{
    string binaryOutput = ""; //Create an empty string to store binary string
    int binary[32]; //Create an array of size 32 to store binary translation of input
    int i = 0; //Define i = 0
    
    if (input == 0) //If the input is zero, set binaryOutput to zero
    {
        binaryOutput += to_string(0);
    }
    
    while (input > 0) //While input is greater than zero
    {
        binary[i] = input % 2; //Store input % 2 in binary at index i
        input = input / 2; //Divide input by 2
        i++; //Increase i by 1
    }
    
    for (int j = i - 1; j >= 0; j--) //Since the binary array is reversed, we need to add elements from the array in reverse order to binaryOutput
    {
        binaryOutput += to_string(binary[j]); //Concatenate to_string of binary at index j
    }
    return binaryOutput; //Return binaryOuput
}

int main()
{
    //Test case 1
    //Expected output
    //1000
    cout << decimalToBinaryIterative(8) << endl;
    
    //Test case 2
    //Expected output
    //101
    cout << decimalToBinaryIterative(5) << endl;
    
    //Test case 2
    //Expected output
    //101
    cout << decimalToBinaryIterative(0) << endl;
}