#include <iostream>
#include <vector>
#include <fstream>
#include "Pokemon.h"
using namespace std;

int split1(string inputString, char delimiter, string storageArray[], int lengthOfArray) //This algorithm splits a string based on delimiters and stores the split strings into a string array
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

Pokemon::Pokemon() //Default constructor for Pokemon
{
    x = 0;
    y = 0;
    HP = 0;
    attack = 0;
    defense = 0;
    maxAttack = 0;
    maxDefense = 0;
    speed = 0;
    level = 0;
    hasFainted = false;
}

Pokemon::Pokemon(string Name, int Hp, int Attack, int Defense, int MaxAttack, int MaxDefense, int Speed, int Level, bool HasFainted, string Type1, string Type2, int X, int Y) //Parametrized constructor for Pokemon
{
    name = Name;
    HP = Hp;
    attack = Attack;
    defense = Defense;
    maxAttack = MaxAttack;
    maxDefense = MaxDefense;
    speed = Speed;
    hasFainted = HasFainted;
    type1 = Type1;
    type2 = Type2;
    x = X;
    y = Y;
}

int Pokemon::getX()
{
    return x;
}

int Pokemon::getY()
{
    return y;
}

void Pokemon::setX(int newX)
{
    x = newX;
}

void Pokemon::setY(int newY)
{
    y = newY;
}

string Pokemon::getPokemonName()
{
    return name;   
}

int Pokemon::getHP() //Returns HP
{
    return HP;
}

void Pokemon::setHP(int newHP) //Sets new HP
{
    HP = newHP;
}

int Pokemon::getAttack() //Returns attack
{
    return attack;
}

void Pokemon::setAttack(int newAttack) //Set new attack
{
    attack = newAttack;
}

int Pokemon::getDefense() //Returns defense
{
    return defense;
}

void Pokemon::setDefense(int newDefense) //Set new defense
{
    defense = newDefense;
}

int Pokemon::getMaxAttack() //Return maxAttack
{
    return maxAttack;
}

void Pokemon::setMaxAttack(int newMaxAttack) //Set maxAttack
{
    maxAttack = newMaxAttack;
}

int Pokemon::getMaxDefense() //Returns maxDefense
{
    return maxDefense;
}

void Pokemon::setMaxDefense(int newMaxDefense) //Sets new maxDefense
{
    maxDefense = newMaxDefense;
}

int Pokemon::getSpeed() //Return speed
{
    return speed;
}

void Pokemon::setSpeed(int newSpeed) //Sets new speed
{
    speed = newSpeed;
}

int Pokemon::getLevel() //Return level
{
    return level;
}

void Pokemon::setLevel(int newLevel) //Set new level
{
    level = newLevel;
}

bool Pokemon::HasFainted() //Return hasFainted
{
    return hasFainted;
}

void Pokemon::setHasFainted(bool fainted) //Change hasFainted
{
    hasFainted = fainted;
}

string Pokemon::getType1() //Return pokemon type
{
    return type1;
}

void Pokemon::setType1(string newType1) //Set type of pokemon
{
    type1 = newType1;
}

string Pokemon::getType2() //getType2
{
    return type2;
}

void Pokemon::setType2(string newType2) //Set type2
{
    type2 = newType2;
}

vector<Pokemon> Pokemon::loadPokemon(string fileName) //Load Pokemon
{
    ifstream pokemonReadIn;
    pokemonReadIn.open(fileName);
    string storageArray[9];
    vector<Pokemon> pokemonMaster;
    string line = "";
    int numPokemonReadIn = 0;
    
    if (pokemonReadIn.fail())
    {
        cout << "No pokemon loaded" << endl;
        return pokemonMaster;
    }
    else
    {
        while (getline(pokemonReadIn,line))
        {
            split1(line, ',', storageArray, 9);
            if (line != "") //If the line is not an empty string
            {
                Pokemon newPokemon = Pokemon(storageArray[1], //Name
                                            stoi(storageArray[2]), //HP
                                            stoi(storageArray[3]), //Attack
                                            stoi(storageArray[4]), //Defense
                                            stoi(storageArray[6]), //MaxAttack
                                            stoi(storageArray[6]), //MaxDefense
                                            stoi(storageArray[5]), //Speed
                                            0, //Level
                                            false, //hasFainted
                                            storageArray[7], //Type1
                                            storageArray[8], //Type2
                                            0, //X
                                            0); //Y
                pokemonMaster.push_back(newPokemon);
                numPokemonReadIn++;
            }
        }
    }
    return pokemonMaster;
}

void Pokemon::levelUpPokemon() //Level up pokemon
{
    int levelUpHP = HP *(1/50);
    int levelUpAttack = attack * (1/50);
    int levelUpDefense = defense * (1/50);
    int levelUpSpeed = speed * (1/50);
    
    HP = HP + levelUpHP;
    attack = attack + levelUpAttack;
    defense = defense + levelUpDefense;
    speed = speed + levelUpSpeed;
    
    if (attack >= maxAttack)
    {
        attack = maxAttack;
    }
    if (defense >= maxDefense)
    {
        defense = maxDefense;
    }
}