#include <iostream>
#include <vector>
#include "Pokemon.h"
#include "Trainer.h"
using namespace std;

#ifndef MAP_H
#define MAP_H

class Map
{
    public:
    Map();
    void loadMap(string fileName); //Loads map in a txt file
    string getCharAtIndex(int i, int j); //Gets the char at an index in the mapArray
    void loadCharMap(int rows, int columns); //Loads map in a txt file
    void setCharAtIndex(int i, int j, string newChar); //Gets the char at an index in the mapArray
    void printMap(); //Print map
    // void randomizeTrainers(vector<Trainer> Trainers); //Randomizes trainers throughout the map array
    // void randomizePokeCenters(vector<PokeCenter> PokeCenters); //Randomizes PokeCenters throughout the map array
    
    private:
    string mapArray[25][16]; //Map of chars
    // vector<Pokemon> Pokemon; //20 random pokemon 
    // vector<Trainer> Trainer; //20 random trainers
    // vector<PokeCenter> PokeCenter; //Pokecenters
};

#endif