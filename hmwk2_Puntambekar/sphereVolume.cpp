// CS1300 Fall 2019
// Author: Sidhant Puntambekar
// Recitation: 304 – Reddy
// Homework 2 - Problem #5

#include <iostream>
#include <math.h>
using namespace std;

void sphereVolume(double radius) //This algorithm calculates the volume of a sphere with an input radius
{
    double volume; // Create a new variable called volume
    volume = (4.0/3.0) * M_PI * pow(radius, 3); //Calculate volume of a sphere using radius and formula for volume of a sphere
    cout << "volume: " << volume << endl; //Output the volume of the sphere to the screen
}

int main()
{
    //Test case 1
    //Expected output 
    //523.599
    sphereVolume(5.0);
    
    //Test case 2
    //Expected output
    //4188.79
    sphereVolume(10.0);
}