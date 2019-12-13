#include <iostream>
#include <vector>
#include "Pokedex.h"
#include "Pokemon.h"
using namespace std;

//Still need to come up with a way for inheritance in C++

Pokedex::Pokedex() //Default constructor for pokedex
{
    numPokemonFound = 0;
}

Pokedex::Pokedex(int NumPokemonFound, vector<Pokemon> Pokedex) //Parametrized constructor for pokedex
{
    numPokemonFound = NumPokemonFound;
    for (int i = 0; i < Pokedex.size(); i++)
    {
        pokedex.at(i) = Pokedex.at(i);
    }
}

int Pokedex::getNumPokemonFound() //Returns numPokemonFound
{
    return numPokemonFound;
}

void Pokedex::setNumPokemonFound(int newNumPokemonFound) //Sets numPokemonFound
{
    numPokemonFound = newNumPokemonFound;
}

Pokemon Pokedex::getPokemon(int i) //Return a pokemon in the pokedex at index i
{
    return pokedex.at(i);
}

void Pokedex::addPokemon(Pokemon caughtPokemon) //Adds a pokemon to the class after it has been caught
{
    pokedex.push_back(caughtPokemon);
    numPokemonFound++;
}

void Pokedex::erasePokemon(int i) //Erase pokemon from pokedex
{
    pokedex.erase(pokedex.begin(), pokedex.begin()+i);
}

// int Pokedex::getTypes()
// {
//     int countTypes = 0;
//     for (int i = 0; i < pokedex.getSize(); i++)
//     {
//         if (pokedex.at(i).getType())
//     }
// }