//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 4 - Problem 1

#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{
    double temps[10] = {-459.67, -459.67, -459.67, -459.67, -459.67, -459.67, -459.67, -459.67, -459.67, -459.67}; //Declare an array that has ten spaces and contains the value -459.67
    for (int i = 0; i < 10; i++) //Print out elements of array temps
    {
        cout << temps[i] << endl;
    }
    cout << "" << endl;
    
    string colors[5] = {"Red", "Blue", "Green", "Cyan", "Magenta"}; //Declare an array that has five spaces and stores the colors, red, blue, green, cyan, and magenta
    for (int j = 0; j < 5; j++) //Print out elements of array colors
    {
        cout << colors[j] << endl;
    }
    cout << "" << endl;
    
    int sequence[100]; //Initialize an array of size 100
    for (int number = 0; number < 100; number++) //Loop through 100 and populate array with numbers from 1 to 100
    {
        sequence[number] = number + 1;
    }
    for (int k = 0; k < 100; k++) //Print out the elements of array sequence
    {
        cout << sequence[k] << endl;
    }
    cout << "" << endl;
    
    char letters[52]; //Create a character array of 52 indices to hold the lower and upper case letters
    int o = 0; //Define variable o to keep track of ASCII values
    for (int l = 0; l < 52; l = l + 2) //Loop through each element in the array by an increment by two to store upper and lower case letters
    {
        letters[l] = 65 + o; //Add the ASCII value to the index l for upper case
        letters[l+1] = 97 + o; //Add the ASCII value to the index l+1 for lower case
        cout << letters[l] << " " << letters[l+1] << endl; //Print out the letters array
        o++; //Increment o by one
    }
}