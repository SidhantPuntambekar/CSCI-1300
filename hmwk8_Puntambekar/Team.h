//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 8 - Problem 3 & 4

#include <iostream>
#include <vector>
#include "Player.h"
using namespace std;

#ifndef TEAM_H
#define TEAM_H

class Team
{
    public:
    Team(); //Default constructor for team
    Team(string TeamName); //Parametrized constructor for Team
    void setTeamName(string newTeamName); //Set the team name to a new team name
    vector<Player> readRoster(string rosterFileName); //Read roster files
    string getPlayerName(int i); //Get the player's name at an ith index
    double getPlayerPoints(int i); //Get the player's points at an ith index
    int getNumPlayers(); //Get the num of players in the player's array
    string getTeamName(); //Get the team name
    
    private:
    string teamName; //Keeps track of the team name
    vector<Player> players; //Keeps track of the players array
};

#endif