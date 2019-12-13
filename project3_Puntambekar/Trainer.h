#include <iostream>
#include <vector>
using namespace std;

#ifndef TRAINER_H
#define TRAINER_H

class Trainer
{
    public:
    Trainer(); //Default constructor for trainer
    Trainer(string name, int X, int Y, int Pokeballs, int Points, int Badges, vector<string> badge, vector<Pokemon> Party, bool WonGame); //Parametrized constructor for trainer
    string getTrainerName(); //Get trainer name
    string getPokemonName(); //Get pokemon name
    int getX(); //Return x
    void setX(int newX); //Set x 
    int getY(); //Return y
    void setY(int newY); //Set y
    int getPokeballs(); //Return pokeballs
    void setPokeballs(int newPokeballs); //set pokeballs
    int getPoints(); //Return points
    void setPoints(int newPoints); //Set new points
    int getBadges(); //Return number of badges
    void setBadges(int newBadges); //Set new number of badges
    string getBadgeVector(int i); //Get a badge from the vector of badges
    vector<string> addBadgeVector(string newBadge); //This function adds a new badge to the vector<string> of badges
    Pokemon getParty(int j); //Get a pokemon from the party at a specific index
    Pokemon setParty(int j, Pokemon newPokemon);
    void addPokemonToParty(Pokemon newPokemon); //Add a new Pokemon to the party
    vector<Pokemon> returnParty();
    bool WonGame(); //Return wonGame
    bool setWonGame(bool game); //Set wonGame
    int getPartySize(); //Get size
    vector<Pokemon> getPartyVector(); //get party vector
    
    private:
    string name;
    int x;
    int y;
    int pokeballs; //Pokeballs
    int points; //Points
    int badges; //Badges
    vector<string> Badge; //Vector of names of badges
    vector<Pokemon> party; //Vector of current party
    bool wonGame; //Wongame?
};

#endif