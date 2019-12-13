#include <iostream>
#include <vector>
using namespace std;

#ifndef POKEDEX_H
#define POKEDEX_H

class Pokedex
{
    public:
    Pokedex(); //Default constructor for pokedex
    Pokedex(int NumPokemonFound, vector<Pokemon> Pokedex); //Parametrized constructor for pokedex
    int getNumPokemonFound(); //Returns numPokemonFound
    void setNumPokemonFound(int newNumPokemonFound); //Sets numPokemonFound
    Pokemon getPokemon(int i); //Return a pokemon in the pokedex at index i
    void addPokemon(Pokemon caughtPokemon); //Adds a pokemon to the class after it has been caught
    int getTypes(); //get types
    void erasePokemon(int j); //Erase pokemon from the pokedex
    
    private:
    int numPokemonFound; //Number of pokemon in the pokedex
    vector<Pokemon> pokedex; //Vector of pokemon called pokedex
};

#endif