//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 8 - Problem 3 & 4

#include <iostream>
#include <vector>
#include <fstream>
#include "Player.h"
#include "Team.h"
using namespace std;

int split(string inputString, char delimiter, string storageArray[], int lengthOfArray) //This algorithm splits a string based on delimiters and stores the split strings into a string array
{
    int splitString = 0; //Count the number of times the string is split (word count)
    string word = ""; //Variable to keep track of split strings
    if (inputString == "") //If the inputString is an empty string, return 0
    {
        return splitString;
    }
    inputString = inputString + delimiter; //Add a delimiter at the end of the string to catch the last word in inputString
    for (int i = 0; i <= inputString.length(); i++) //Loop through inputString length to find if the inputString has delimiters
    {
        if (inputString[i] != delimiter) //If the inputString does not have a delimiter at position i, then add the word to word variable
        {
            word = word + inputString[i];
        }
        else if (word != "") //Else if word is not an empty string/delimiter
        { 
            storageArray[splitString] = word; //Add the word to storageArray at position splitString
            splitString++; //Add 1 to split string to keep track of words
            word = ""; //Reset word back to an empty string
        }
    }
    return splitString; //Return the word count
}

Team::Team() //Default constructor for Team
{
    teamName = "";
    
}

Team::Team(string TeamName) //Parametrized constructor for Team
{
    teamName = TeamName;
}

void Team::setTeamName(string newTeamName) //Set the teamName to a newTeamName
{
    teamName = newTeamName;
}

vector<Player> Team::readRoster(string rosterFileName) //readRoster files
{
    ifstream roster; //Open a new filestream 
    roster.open(rosterFileName); //Open the rosterFileName
    string line = ""; //Set line equal to empty string
    string Players[2]; //Array for split function
    
    if (roster.fail()) //If the file can't be opened return an empty array
    {
        return players;
    }
    while (getline(roster,line)) //Loop through all of the lines in the file
    {
        split(line,',',Players,2); //Run the split function with comma delimiter
        players.push_back(Player(Players[0], stod(Players[1]))); //Add the player's name and points to the players array
    }
    return players; //Return the players array
}

string Team::getPlayerName(int i) //Get the player's name at a specified index
{
    string error = "ERROR"; //Error message
    if (i < 0 || i >= players.size()) //If the index if out of the range of the vector
    {
        return error; //Return error
    }
    else //In all other cases
    {
        return players.at(i).getName(); //Return the player's name from the player array
    }
}

double Team::getPlayerPoints(int i) //Get the player's points at a specified index
{
    if (i < 0 || i >= players.size()) //If the index is out of the range of the vector
    {
        return -1; //Return -1
    }
    else //In all cases
    {
        return players.at(i).getPoints(); //Return the player's points from the player array
    }
}

int Team::getNumPlayers() //Return the number of players in the players array
{
    return players.size();
}

string Team::getTeamName() //Return the team name
{
    return teamName;
}

string game(Team team1, Team team2) //This algorithm runs a game between two teams and determines a winner
{
    string forfeit = "forfeit"; //Forfeit message
    string draw = "draw"; //Draw message
    double team1Points = 0.0; //Team1 points
    double team2Points = 0.0; //Team2 points
    if (team1.getNumPlayers() < 4 || team2.getNumPlayers() < 4) //If the teams contains less than four players, return forfeit
    {
        return forfeit;
    }
    
    for (int i = 0; i < 4; i++) //Loop through first four players
    {
        team1Points += team1.getPlayerPoints(i); //Add player's points at ith index from the team1 index
        team2Points += team2.getPlayerPoints(i); //Same as above except for team2
    }
    
    if (team1Points > team2Points) //If team1 beats team2, return team1's name
    {
        return team1.getTeamName();
    }
    
    else if (team2Points > team1Points) //If team 2 beats team1, return team2's name
    {
        return team2.getTeamName();
    }
    else //Return draw
    {
        return draw;
    }
}