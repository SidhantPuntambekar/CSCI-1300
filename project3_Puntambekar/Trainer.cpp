#include <iostream>
#include <vector>
#include "Pokemon.h"
#include "Trainer.h"
using namespace std;

Trainer::Trainer() //Default constructor for trainer
{
    name = "";
    x = 0;
    y = 0;
    pokeballs = 0;
    points = 0;
    badges = 0;
    wonGame = false;
}

Trainer::Trainer(string trainerName, int X, int Y, int Pokeballs, int Points, int Badges, vector<string> badge, vector<Pokemon> Party, bool WonGame) //Parametrized constructor for trainer
{
    name = trainerName;
    x = X;
    y = Y;
    pokeballs = Pokeballs;
    points = Points;
    badges = Badges;
    for (int i = 0; i < badge.size(); i++)
    {
        Badge.at(i) = badge.at(i);
    }
    for (int j = 0; j < Party.size(); j++)
    {
        party.at(j) = Party.at(j);
    }
    wonGame = WonGame;
}

string Trainer::getTrainerName() //Get trainer name
{
    return name;
}

int Trainer::getX() //Get x
{
    return x;
}

void Trainer::setX(int newX) //Set x
{
    x = newX;
}

int Trainer::getY() //Get Y
{
    return y;
}

void Trainer::setY(int newY) //Set Y
{
    y = newY;
}

int Trainer::getPokeballs() //Return pokeballs
{
    return pokeballs;
}

void Trainer::setPokeballs(int newPokeballs) //set pokeballs
{
    pokeballs = newPokeballs;
}

int Trainer::getPoints() //Return points
{
    return points;
}

void Trainer::setPoints(int newPoints) //Set new points
{
    points = newPoints;
}

int Trainer::getBadges() //Return number of badges
{
    return badges;
}

void Trainer::setBadges(int newBadges) //Set new number of badges
{
    badges = newBadges;
}

string Trainer::getBadgeVector(int i) //Get a badge from the vector of badges
{
    return Badge.at(i);
}

vector<string> Trainer::addBadgeVector(string newBadge) //This function adds a new badge to the vector<string> of badges
{
    Badge.push_back(newBadge);
}

vector<Pokemon> Trainer::getPartyVector() //return party
{
    return party;
}

Pokemon Trainer::getParty(int j) //Get a pokemon from the party at a specific index
{
    return party.at(j);
}

Pokemon Trainer::setParty(int j, Pokemon newPokemon) //Set party
{
    Pokemon temp;
    party.at(j) = temp;
    temp = newPokemon;
    newPokemon = party.at(j);
    return party.at(j);
}

void Trainer::addPokemonToParty(Pokemon newPokemon) //Add a new Pokemon to the party
{
    party.push_back(newPokemon);
}

bool Trainer::WonGame() //Return wonGame
{
    return wonGame;
}

bool Trainer::setWonGame(bool game) //Set wonGame
{
    wonGame = game;
}

string Trainer::getPokemonName() //Get pokemon name
{
    return name;
}

int Trainer::getPartySize() //Get party size
{
    return party.size();
}

vector<Pokemon> Trainer::returnParty() //Return party
{
    return party;
}



// bool Trainer::foundWildPokemon(Trainer trainerToCheckPokemon)
// {
//     int X = object.getX();
//     int Y = object.getY();
    
//     for (int i = X-3; i < X-4; i++)
//     {
//         for (int j = Y-3; j < Y-4; i++)
//         {
            
//         }
//     }
// }