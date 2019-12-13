#include <iostream>
#include <vector>
using namespace std;

#ifndef POKEMON_H
#define POKEMON_H

class Pokemon
{
    public:
    Pokemon(); //Default constructor for Pokemon
    Pokemon(string name, int Hp, int Attack, int Defense, int MaxAttack, int MaxDefense, int Speed, int Level, bool HasFainted, string type1, string type2, int X, int Y); //Parametrized constructor for Pokemon
    int getX(); //Return x
    int getY(); //Return y
    void setX(int newX); //Set x
    void setY(int newY); //Set y
    string getPokemonName(); //Get pokemon name
    int getHP(); //Returns HP
    void setHP(int newHP); //Sets new HP
    int getAttack(); //Returns attack
    void setAttack(int newAttack); //Set new attack
    int getDefense(); //Returns defense
    void setDefense(int newDefense); //Set new defense
    int getMaxAttack(); //Return maxAttack
    void setMaxAttack(int newMaxAttack); //Set maxAttack
    int getMaxDefense(); //Returns maxDefense
    void setMaxDefense(int newMaxDefense); //Sets new maxDefense
    int getSpeed(); //Return speed
    void setSpeed(int newSpeed); //Sets new speed
    int getLevel(); //Return level
    void setLevel(int newLevel); //Set new level
    bool HasFainted(); //Return hasFainted
    void setHasFainted(bool fainted); //Change hasFainted
    string getType1(); //Return pokemon type
    void setType1(string newType1); //Set type of pokemon
    string getType2(); //Return pokemon type
    void setType2(string newType2); //Set type of pokemon
    vector<Pokemon> loadPokemon(string fileName); //Loads the pokemon from a text file
    void levelUpPokemon(); //Levels up pokemon
   
    
    private:
    string name;
    int x;
    int y;
    int HP; //HP
    int attack; //Attack
    int defense; //Defense
    int maxAttack; //MaxAttack
    int maxDefense; //MaxDefense
    int speed; //Speed
    int level; //Level
    bool hasFainted; //hasFainted?
    string type1; //Type
    string type2;
};

#endif