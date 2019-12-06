//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 6 - Problem 1

#include <iostream>
#include <math.h>
#include "planet.h"
using namespace std;
    
Planet::Planet() //Default constructor for Planet object. Sets all values to default zero
{
    planetName = "";
    planetRadius = 0.0;
}

Planet::Planet(string planet, double radius) //Parametrized constructor for Planet object. Takes in a planet name and radius
{
    planetName = planet;
    planetRadius = radius;
}

string Planet::getName()  //Returns the name of the planet
{
    return planetName; 
}

void Planet::setName(string newPlanetName) //Set the name of a planet with a newPlanetName
{
    planetName = newPlanetName;
}

double Planet::getRadius() //Get the radius of the planet
{
    return planetRadius;
}

void Planet::setRadius(double newPlanetRadius) //Set the radius of the planet with a newPlanetRadius
{
    planetRadius = newPlanetRadius;
}

double Planet::getVolume() //Compute the volume of the planet
{
    double planetVolume = (4/3.0)* (M_PI) * (planetRadius*planetRadius*planetRadius);
    return planetVolume;
}

double maxRadius(Planet planetRadii[], int sizeOfPlanetRadiiArray) //Find the max radius of Planet objects
{
    double maxPlanetRadius = 0; //Declare a variable to keep track of the max radius
    int idx = -1; //Keep track of the max radius index
    
    if (sizeOfPlanetRadiiArray == 0) //If the size of the planet array is zero return -1
    {
        return -1;
    }
    for (int i = 0; i < sizeOfPlanetRadiiArray; i++) //Loop through the planet array
    {
        double tempRadius = planetRadii[i].getRadius(); //Create a temp varibale to keep track of each index in the planet array
        if (tempRadius > maxPlanetRadius) //Max algorithm to find max radii of planet
        {
            maxPlanetRadius = tempRadius; //Store the tempRadius in maxPlanetRadus
            idx = i; //Set the index to i
        }
    }
    return idx; //return the index of the max planet radii
}