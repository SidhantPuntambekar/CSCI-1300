// CS1300 Fall 2019
// Author: Sidhant Puntambekar
// Recitation: 304 – Reddy
// Homework 2 - Problem #4

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Enter a radius: " << endl;
    double radius;
    cin >> radius;
    
    double volume;
    volume = (4.0/3.0) * M_PI * pow(radius, 3);
    cout << "volume: " << volume << endl; //Calculates volume of sphere using input of a radius and formula for volume of a sphere
    
    double surfaceArea;
    surfaceArea = (4*(M_PI))*(radius*radius);
    cout << "surface area: " << surfaceArea << endl; //Calculates surface area of sphere using input of a radius and formula for volume of a sphere
}