//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 6 - Problem 1

#include <iostream>
using namespace std;
#ifndef PLANET_H
#define PLANET_H

class Planet
{
    public:
    Planet(); //Default constructor for Planet object. Sets all values to default zero
    Planet(string planet, double radius); //Parametrized constructor for Planet object. Takes in a planet name and radius
    string getName(); //Returns the name of the planet
    void setName(string newPlanetName); //Set the name of a planet with a newPlanetName
    double getRadius(); //Get the radius of the planet
    void setRadius(double newPlanetRadius); //Set the radius of the planet with a newPlanetRadius
    double getVolume(); //Compute the volume of the planet
    
    private:
    string planetName; //Keeps track of the planet name
    double planetRadius; //Keeps track of the planet radius
};

#endif