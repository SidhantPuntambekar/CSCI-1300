//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 3 - Problem 10

#include <iostream>
using namespace std;

int printGrid(int number) //This algorithm takes in a number representing the number of rows and columns of a grid and then prints out a grid of n rows and cols
{
    int count = 1; //Create a count variable
    int secondCount = 1; //Row perimeter
    int thirdCount = 0; //Column perimeter
    
    if (number <= 0) //If number is less than 0, throw error message
    {
        cout << "The grid can only have a positive number of rows and columns." << endl;
    }
    
    if(number > 0) //In all other cases
    {
        while(thirdCount <= number) //While the column perimeter is less than number
        {
            if(secondCount % 2 == 0) //If the row perimeter is even, print "|  |"
            {
                cout<<"|  |";
                
                while (count < number) //Repeat until count is less than number
                {
                    cout << "  |"; //Print out "  |"
                    count++; //Add one to count
                }
                
                if (count = number) // If count is the same as number, then print nothing
                {
                    cout << endl;
                }
            }
            
            else //If row perimeter is odd
            {
                thirdCount++; //Add one to third count
                cout << "+--+"; //Print "+--+"
                
                while (count < number) //While count is less than number
                {
                    cout << "--+"; //Print "--+"
                    count++; //Add one to count
    
                }
                
                if (count = number) //If count equals number
                {
                    cout << endl; //Print nothing
                }
            }
            count=1; //Count starts at 1
            secondCount++; //Add one to the row perimeter
        }
    }
}

int main()
{
    //Test case 1
    //Expected output
    // +--+--+--+
    // |  |  |  |
    // +--+--+--+
    // |  |  |  |
    // +--+--+--+
    // |  |  |  |
    // +--+--+--+
    printGrid(3);
    
    //Test case 2
    //Expected output
    //"The grid can only have a positive number of rows and columns"
    printGrid(-12);
}