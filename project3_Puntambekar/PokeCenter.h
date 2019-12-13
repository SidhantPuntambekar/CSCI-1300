#include <iostream>
using namespace std;

#ifndef POKECENTER_H
#define POKECENTER_H

class PokeCenter
{
    public:
    PokeCenter(); //Default constructor for Pokemon Center
    PokeCenter(int X, int Y, int NumPokemonHealed); //Parametrized constructor for Pokemon Center
    int getX(); //Get x
    int getY(); //Get y
    void setX(int newX); //set X
    void setY(int newY); //Set Y
    void healPokemon(vector<Pokemon> PokemonMasterPokemonCenter, vector<Pokemon> PokemonParty); //Return numPokemonHealed
    void changePokemonParty(); //Set numPokemonHealed
    void changeActivePokemon(); //This function will restore all pokemon to max HP 
    int getNumPokemonHealed(); //This function will take in user input and change the pokemon party with pokemon from the pokedex
    void setNumPokemonHealed(int newNumPokemonHealed); //This function will change the active pokemon in the user's partys
    
    private:
    int x;
    int y;
    int numPokemonHealed; //NumPokemonHealed
};

#endif