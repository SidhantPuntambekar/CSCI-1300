//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 5 - Problem 5

#include <iostream>
#include <fstream>
#include <array>
#include <string>
using namespace std; 

void floodMap(double floodMapArray[][4], int rowsOfFloodMapArray, double currentWaterLevel) //This algorithm takes in a double array called floodMap and determines if the value of the double array is above or below a certain value
{
    for (int i = 0; i < rowsOfFloodMapArray; i++) //Loop through the rows of the 2d array floodMapArray
    {
        for (int j = 0; j < 4; j++) //Loop through the columns of the 2d array floodMapArray
        {
            if (floodMapArray[i][j] <= currentWaterLevel) //If the value of floodMapArray at i,j is less than the currentWaterLetter
            {
                cout << "*"; //Print an asterisk
            }
            else //In all other cases
            {
                cout << "_"; //Print an underscore
            }
        }
        cout << "\n" << endl; //Print out a break in the current line
    }
}

int main()
{
    //Test case 1
    //Expected output
    //*_*_
    double map[1][4] = {{5.0, 7.6, 3.1, 292}};
    floodMap(map, 1, 6.0);
    
    //Test case 2
    //Expected output
    /*
        *_**
        *__*
        _*__
        ****
    */
    double map1[4][4] = {{1.0, 5.0, 1.0, 1.0},
    {1.0, 5.0, 5.0, 1.0},
    {5.0, 1.0, 5.0, 5.0},
    {1.0, 1.0, 1.0, 1.0}};
    floodMap(map1, 4, 3.14);
}