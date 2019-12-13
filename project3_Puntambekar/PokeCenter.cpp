#include <iostream>
#include "Pokemon.h"
#include "PokeCenter.h"
using namespace std;

PokeCenter::PokeCenter() //Default constructor for Pokemon Center
{
    numPokemonHealed = 0;
}

PokeCenter::PokeCenter(int X, int Y, int NumPokemonHealed) //Parametrized constructor for Pokemon Center
{
    x = X;
    y = y;
    numPokemonHealed = NumPokemonHealed;
}

int PokeCenter::getX() //Get x
{
    return x;
}

int PokeCenter::getY() //Get y
{
    return y;
}

void PokeCenter::setX(int newX) //Set x
{
    x = newX;
}

void PokeCenter::setY(int newY) //Set y
{
    y = newY;
}

int PokeCenter::getNumPokemonHealed() //Return numPokemonHealed
{
    return numPokemonHealed;
}

void PokeCenter::setNumPokemonHealed(int newNumPokemonHealed) //Set numPokemonHealed
{
    numPokemonHealed = newNumPokemonHealed;
}

void PokeCenter::healPokemon(vector<Pokemon> PokemonMasterPokemonCenter, vector<Pokemon> PokemonParty) //This function will restore all pokemon to max HP 
{
    for (int i = 0; i < PokemonParty.size(); i++)
    {
        if (PokemonParty.at(i).getPokemonName() == PokemonMasterPokemonCenter.at(i).getPokemonName())
        {
            PokemonParty.at(i).setHP(PokemonMasterPokemonCenter.at(i).getHP());
        }
    }
}

void PokeCenter::changePokemonParty() //This function will take in user input and change the pokemon party with pokemon from the pokedex
{
    
}

void PokeCenter::changeActivePokemon() //This function will change the active pokemon in the user's partys
{
    
}