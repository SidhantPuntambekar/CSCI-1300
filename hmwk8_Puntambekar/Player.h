//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 8 - Problem 2

#include <iostream>
#include <vector>
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
    public:
    Player(); //Default constructor for Player class
    Player(string Name, double Points); //Parametrized constructor for Player class
    string getName(); //Returns the player's name
    double getPoints(); //Return the player's points
    void setName(string newName); //Set the player's name to a new name
    void setPoints(double newPoints); //Set the player's point to a new number of points
    
    private:
    string name; //Keeps track of the player's name
    double points; //Keeps track of the player's points
};

#endif