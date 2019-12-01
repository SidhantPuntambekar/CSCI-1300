// CS1300 Fall 2019
// Author: Sidhant Puntambekar
// Recitation: 304 – Reddy
// Homework 2 - Problem #6

#include <iostream>
#include <math.h>
using namespace std;

void sphereSurfaceArea(double radius) //This algorithm calculates surface area of a sphere given the radius
{
    double surfaceArea; //Create a new double variable called surfaceArea
    surfaceArea = (4*(M_PI))*(radius*radius); //Calculate surface area of the sphere using the radius and formula for surface area of a sphere
    cout << "surface area: " << surfaceArea << endl; //Output surface area to the screen
}

int main()
{
    //Test case 1
    //Expected output
    //314.159
    sphereSurfaceArea(5.0);
    
    //Test case 2
    //Expected output
    //1256.64
    sphereSurfaceArea(10.0);
}