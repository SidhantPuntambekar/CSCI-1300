//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 8 - Problem 2

#include <iostream>
#include "Player.h"
using namespace std;

Player::Player() //Default constuctor for player class
{
    name = "";
    points = 0.0;
}

Player::Player(string Name, double Points) //Parametrized constructor for player class
{
    name = Name;
    points = Points;
}

string Player::getName() //Return the player's name
{
    return name;
}

double Player::getPoints() //Return the player's points
{
    return points;
}

void Player::setName(string newName) //Set the player's name to a new name
{
    name = newName;
}

void Player::setPoints(double newPoints) //Set the player's points to a new set of points
{
    points = newPoints;
}