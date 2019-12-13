#include <iostream>
using namespace std;

#ifndef GAME_H
#define GAME_H

class Game
{
    public:
    void encounterWildPokemon(); //This function will handle the encounters between the trainer and wild pokemon
    void encounterOtherTrainers(); //This function will handle the encounters between the trainer and other trainers. Similar to previous function but no ability to run
    
    private:
    string userName;
    vector <Pokemon> trainerDeck;
    vector <string> trainerBadges;
    bool wonGame = false;
};

#endif