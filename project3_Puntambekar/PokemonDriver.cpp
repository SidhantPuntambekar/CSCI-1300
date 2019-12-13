// #include "Pokemon.h"
// #include "Pokemon.cpp"
// #include "Trainer.h"
// #include "Trainer.cpp"
// #include "Map.h"
// #include "Map.cpp"
#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

void startingPokemonMenu() //Starting pokemon menu
{
    cout << "1. Bulbasaur" << endl;
    cout << "2. Charmander" << endl;
    cout << "3. Squirtle" << endl;
    cout << "4. Pikachu" << endl;
}

void playerOptions() //Player option menu
{
    cout << "What would you like to do?" << endl;
    cout << "1. Travel" << endl;
    cout << "2. Rest" << endl;
    cout << "3. Try your luck" << endl;
    cout << "4. Quit the game" << endl;
}

void directions() //Direction menu
{
    cout << "Which direction would you like to travel?" << endl;
    cout << "1. North" << endl;
    cout << "2. South" << endl;
    cout << "3. East" << endl;
    cout << "4. West" << endl;
}

void wildEncounterOptions() //Wild encounter menu
{
    cout << "1. Fight" << endl;
    cout << "2. Switch Active Pokemon" << endl;
    cout << "3. Run" << endl;
}

void trainerEncounterOptions() //Trainer encounter menu
{
    cout << "1. Fight" << endl;
    cout << "2. Switch Active Pokémon" << endl;
}

vector<PokeCenter> createPokemonCenters() //Initialize Pokemon Centers
{
    vector<PokeCenter> pokeCenters;
    PokeCenter pokeCenter1;
    PokeCenter pokeCenter2;
    PokeCenter pokeCenter3;
    PokeCenter pokeCenter4;
    PokeCenter pokeCenter5;
    PokeCenter pokeCenter6;
    PokeCenter pokeCenter7;
    PokeCenter pokeCenter8;
    PokeCenter pokeCenter9;
    PokeCenter pokeCenter10;
    PokeCenter pokeCenter11;
    PokeCenter pokeCenter12;
    PokeCenter pokeCenter13;
    PokeCenter pokeCenter14;
    PokeCenter pokeCenter15;
    
    pokeCenter1.setX(1);
    pokeCenter1.setY(10);
    
    pokeCenter2.setX(5);
    pokeCenter2.setY(1);
    
    pokeCenter3.setX(5);
    pokeCenter3.setY(8);
    
    pokeCenter4.setX(5);
    pokeCenter4.setY(13);
    
    pokeCenter5.setX(9);
    pokeCenter5.setY(5);
    
    pokeCenter6.setX(9);
    pokeCenter6.setY(11);
    
    pokeCenter7.setX(9);
    pokeCenter7.setY(14);
    
    pokeCenter8.setX(11);
    pokeCenter8.setY(3);
    
    pokeCenter9.setX(13);
    pokeCenter9.setY(1);
    
    pokeCenter10.setX(13);
    pokeCenter10.setY(9);
    
    pokeCenter11.setX(17);
    pokeCenter11.setY(9);
    
    pokeCenter12.setX(19);
    pokeCenter12.setY(10);
    
    pokeCenter13.setX(21);
    pokeCenter13.setY(2);
    
    pokeCenter14.setX(23);
    pokeCenter14.setY(7);
    
    pokeCenter15.setX(23);
    pokeCenter15.setY(12);
    
    pokeCenters.push_back(pokeCenter1);
    pokeCenters.push_back(pokeCenter2);
    pokeCenters.push_back(pokeCenter3);
    pokeCenters.push_back(pokeCenter4);
    pokeCenters.push_back(pokeCenter5);
    pokeCenters.push_back(pokeCenter6);
    pokeCenters.push_back(pokeCenter7);
    pokeCenters.push_back(pokeCenter8);
    pokeCenters.push_back(pokeCenter9);
    pokeCenters.push_back(pokeCenter10);
    pokeCenters.push_back(pokeCenter11);
    pokeCenters.push_back(pokeCenter12);
    pokeCenters.push_back(pokeCenter13);
    pokeCenters.push_back(pokeCenter14);
    pokeCenters.push_back(pokeCenter15);
    
    return pokeCenters;
}

vector<Trainer> createRandomTrainerPokemonVectors(vector<Pokemon> masterPokemonVector) //Initialize random Trainer vector of Pokemon
{
    srand(time(0));
    vector<Trainer> gymLeaders;
    Trainer gymLeader1;
    Trainer gymLeader2;
    Trainer gymLeader3;
    Trainer gymLeader4;
    Trainer gymLeader5;
    Trainer gymLeader6;
    Trainer gymLeader7;
    Trainer gymLeader8;
    Trainer gymLeader9;
    Trainer gymLeader10;
    Trainer gymLeader11;
    Trainer gymLeader12;
    Trainer gymLeader13;
    Trainer gymLeader14;
    Trainer gymLeader15;
    
    gymLeader1.setX(1);
    gymLeader1.setY(8);
    
    gymLeader2.setX(1);
    gymLeader2.setY(14);
    
    gymLeader3.setX(3);
    gymLeader3.setY(2);
    
    gymLeader4.setX(4);
    gymLeader4.setY(11);
    
    gymLeader5.setX(7);
    gymLeader5.setY(15);
    
    gymLeader6.setX(8);
    gymLeader6.setY(1);
    
    gymLeader7.setX(10);
    gymLeader7.setY(8);
    
    gymLeader8.setX(11);
    gymLeader8.setY(11);
    
    gymLeader9.setX(12);
    gymLeader9.setY(15);
    
    gymLeader10.setX(2);
    gymLeader10.setY(13);
    
    gymLeader11.setX(17);
    gymLeader11.setY(1);
    
    gymLeader12.setX(19);
    gymLeader12.setY(8);
    
    gymLeader13.setX(21);
    gymLeader13.setY(12);
    
    gymLeader14.setX(22);
    gymLeader14.setY(6);
    
    gymLeader15.setX(23);
    gymLeader15.setY(1);
    
    gymLeaders.push_back(gymLeader1);
    gymLeaders.push_back(gymLeader2);
    gymLeaders.push_back(gymLeader3);
    gymLeaders.push_back(gymLeader4);
    gymLeaders.push_back(gymLeader5);
    gymLeaders.push_back(gymLeader6);
    gymLeaders.push_back(gymLeader7);
    gymLeaders.push_back(gymLeader8);
    gymLeaders.push_back(gymLeader9);
    gymLeaders.push_back(gymLeader10);
    gymLeaders.push_back(gymLeader11);
    gymLeaders.push_back(gymLeader12);
    gymLeaders.push_back(gymLeader13);
    gymLeaders.push_back(gymLeader14);
    gymLeaders.push_back(gymLeader15);
    
    for (int i = 0; i < gymLeaders.size(); i++)
    {
        for (int k = 0; k < 6; k++)
        {
            int j = rand() % masterPokemonVector.size();
            gymLeaders.at(i).addPokemonToParty(masterPokemonVector.at(j));
        }
    }
    return gymLeaders;
}

void nearestPokemonCenter(Map map, Trainer user, int userX, int userY) //Find nearest Pokemon center
{
    for (int i = userX - 3; i < userX + 4; i++)
    {
        for (int j = userY - 3; j < userY + 4; j++)
        {
            if (map.getCharAtIndex(i,j) == "C")
            {
                user.setX(i);
                user.setY(j);
                break;
            }
        }
    }
}

vector<Pokemon> createRandomWildPokemon(vector<Pokemon> masterPokemonVector) //Create random wild pokemon from masterPokemon vector
{
    vector<Pokemon> randomWildPokemon;
    for (int i = 0; i < 20; i++) //Loop through randomWildPokemon
    {
        int randomPokemon = rand() % masterPokemonVector.size(); //Pick a random index in the vector
        randomWildPokemon.push_back(masterPokemonVector.at(randomPokemon)); //Add the corresponding pokemon to the randomWildPokemon vector
    }
    return randomWildPokemon; //Return randomWildPokemon
}

void randomizePokemon(Map map, vector<Pokemon> Pokemons) //Randomizes pokemon throughout the map array 
{
    srand(time(0)); //Seed random
    for (int i = 0; i < Pokemons.size(); i++) //Loop through Pokemons
    {
        Pokemons.at(i).setX(rand() % 17); //Create a random X for pokemon
        Pokemons.at(i).setY(rand() % 26); //Create a random Y for pokemon
        int x = Pokemons.at(i).getX(); //Store x value in integer variable
        int y = Pokemons.at(i).getY(); //Store y value in integer variable
        if (map.getCharAtIndex(x,y) == "w" || map.getCharAtIndex(x,y) == "C" || map.getCharAtIndex(x,y) == "G") //Check to see if the random x and y are water, pokemon center, or gym
        {
            while (map.getCharAtIndex(x,y) != "w" && map.getCharAtIndex(x,y) != "C" && map.getCharAtIndex(x,y) != "G") //If it is then keep randomly generating until it is not a water, center or gym
            {
                Pokemons.at(i).setX(rand() % 17);
                Pokemons.at(i).setY(rand() % 26);
                x = Pokemons.at(i).getX();
                y = Pokemons.at(i).getY();
                map.setCharAtIndex(x,y,"P"); //Rewrite char at the x and y to an exclamation points
            }
        }
    }
}

bool findNearestRandomPokemon(vector<Pokemon> randomPokemon, int userX, int userY) //Find nearest random pokemon
{
    bool pokemonFound = false;
    int wildPokemonIndex = 0;
    for (int i = userX - 2; i < userX + 3; i++)
    {
        for (int j = userY - 2; j < userY + 3; j++)
        {
            if (randomPokemon.at(i).getX() == userX && randomPokemon.at(i).getY() == userY)
            {
                pokemonFound = false;
            }
        }
    }
}

void driver() //Driver for the Pokemon game
{
    srand(time(0)); //Seed random
    Map map1; //Create a map object
    map1.loadMap("mapPoke.txt"); //Load map from mapPoke.txt
    cout << endl; //Enter a new line
    
    Pokemon master; //Create a master Pokemon
    vector<Pokemon> PokemonMaster = master.loadPokemon("pokemon.txt"); //Load pokemon into PokemonMaster vector
    
    string trainerName; //Create trainer name string variable
    cout << "Welcome to Pokemon!" << endl; 
    cout << "Please state your name: " << endl;
    cin >> trainerName; //Take in the trainer name
    
    cout << endl;
    
    vector<Pokemon> trainerDeck; //Create a trainerDeck
    vector<string> trainerBadges; //Create a string of trainerBadges
    bool wonGame = false; //Set wonGame to false
    Pokedex pokedex;
    
    Trainer user(trainerName, 0, 0, 10, 0, 0, trainerBadges, trainerDeck, wonGame); //Create a trainer object called user
    cout << "Welcome " << trainerName << ". Before you can begin your \n Pokemon adventure, you must choose a starting \n Pokemon, courtesy of the Professor. Please \n choose from the following Pokemon: " << endl; //Welcome user to the game
    
    cout << endl;
    
    string startingPokemonString; //Define option input string
    int startingPokemon; //Define option integer to be processed
    
    startingPokemonMenu();
    getline(cin, startingPokemonString); //Get lines from the file as a string
    cin >> startingPokemonString; //Store input in startingPokemonString
    startingPokemon = stoi(startingPokemonString); //Convert optionString to integer
    
    cout << endl;
    
    if (startingPokemon == 1) //If the user chooses Bulbasor
    {
        user.setX(13); //Set x and Y positions
        user.setY(7);
        cout << "Your starting position is @ X: " << user.getX() << ", Y: " << user.getY() << endl; //Print out starting position
        cout << endl;
        map1.loadCharMap(user.getX(),user.getY()); //Load 7x7 char map
        user.addPokemonToParty(PokemonMaster.at(0)); //Add Bulbasor to party
        //user.addPokemonToParty(PokemonMaster.at(1)); //Add Ivysaur to party
        pokedex.addPokemon(PokemonMaster.at(0)); //Add Bulbasor to pokedex
        //pokedex.addPokemon(PokemonMaster.at(1)); //Add Ivysaur to pokedex
    }
    else if (startingPokemon == 2) //If the user chooses Charmander
    {
        user.setX(13); //Set x and Y positions
        user.setY(8);
        cout << "Your starting position is @ X: " << user.getX() << ", Y: " << user.getY() << endl; //Print out starting position
        cout << endl;
        map1.loadCharMap(user.getX(),user.getY()); //Load 7x7 char map
        user.addPokemonToParty(PokemonMaster.at(3)); //Add charmander to party
        //user.addPokemonToParty(PokemonMaster.at(4)); //Add charmeleon to party
        pokedex.addPokemon(PokemonMaster.at(3)); //Add charmander to pokedex
        //pokedex.addPokemon(PokemonMaster.at(4)); //Add charmeleon to pokedex
    }
    else if (startingPokemon == 3)
    {
        user.setX(13); //Set x and Y positions
        user.setY(9);
        cout << "Your starting position is @ X: " << user.getX() << ", Y: " << user.getY() << endl; //Print out starting position
        cout << endl;
        map1.loadCharMap(user.getX(),user.getY()); //Load 7x7 char map
        user.addPokemonToParty(PokemonMaster.at(6)); //Add squirtle to party
        //user.addPokemonToParty(PokemonMaster.at(7)); //Add wartortle to party
        pokedex.addPokemon(PokemonMaster.at(6)); //Add squirtle to pokedex
        //pokedex.addPokemon(PokemonMaster.at(7)); //Add wartortle to pokedex
    }
    else if (startingPokemon == 4)
    {
        user.setX(13); //Set x and Y positions
        user.setY(10);
        cout << "Your starting position is @ X: " << user.getX() << ", Y: " << user.getY() << endl; //Print out starting position
        cout << endl;
        map1.loadCharMap(user.getX(),user.getY()); //Load 7x7 char map
        user.addPokemonToParty(PokemonMaster.at(24)); //Add Pikachu to party
        //user.addPokemonToParty(PokemonMaster.at(25)); //Add Raichu to party
        pokedex.addPokemon(PokemonMaster.at(24)); //Add Pikachu to pokedex
        //pokedex.addPokemon(PokemonMaster.at(25)); //Add Pikachu to pokedex
    }
    
    cout << endl;
    vector<PokeCenter> pokeCenters = createPokemonCenters(); //Create pokemon centers
    vector<Trainer> gymLeaders = createRandomTrainerPokemonVectors(PokemonMaster); //Create trainers with random pokemon
    vector<Pokemon> wildPokemonVector = createRandomWildPokemon(PokemonMaster); //Create random wild Pokemon
    randomizePokemon(map1, wildPokemonVector); //Randomize pokemon
    //map1.printMap(); //Print map for user viewing
    cout << endl;
    
    cout << "The sun is shining, " << user.getTrainerName() << "! It’s a beautiful day, we have 10 Pokéballs left and your Pokémon are strong." << endl;
    for (int i = 0; i < user.getPartySize(); i++) //Print party name, Hp, attack, etc.
    {
        cout << "Name: " << user.getParty(i).getPokemonName() << ", HP: " << user.getParty(i).getHP() << ", A: " << user.getParty(i).getAttack() << 
        ", D: " << user.getParty(i).getDefense() << ", MA: " << user.getParty(i).getMaxAttack() << ", MD: " << user.getParty(i).getMaxDefense() << 
        ", S:" << user.getParty(i).getSpeed() << endl; 
    }
    
    cout << endl;
    
    string playerOptionString; //Define option input string
    int playerOption; //Define option integer to be processed
    playerOptions();
    getline(cin, playerOptionString); //Get lines from the file as a string
    cin >> playerOptionString;
    playerOption = stoi(playerOptionString); //Convert optionString to integer
    cout << endl;
    
    while (playerOption != 4) //While player doesn't choose 4
    {
            if (playerOption == 1) //Travel
            {
                string directionString; //Create directionString
                int direction; //Create direction
                directions(); //Print out direction options
                getline(cin, directionString); //Store direction string
                cin >> directionString;
                direction = stoi(directionString); //convert directiontstring to int
                
                if (direction != 1 && direction != 2 && direction != 3 && direction != 4) //If the user doesn't pick a valid direction
                {
                    cout << "Please pick a valid direction from the options" << endl;
                }
                
                else if (direction == 1) //If the user chooses North
                {
                    if (map1.getCharAtIndex(user.getX()-1, user.getY()) != "p" && map1.getCharAtIndex(user.getX()-1, user.getY()) != "C" && map1.getCharAtIndex(user.getX()-1, user.getY()) != "G") //If the move is not valid
                    {
                        cout << "Please choose another direction" << endl; 
                    }
                    else //Set new coordinates
                    {
                        user.setX(user.getX()-1);
                        cout << "Your new position is @ X: " << user.getX() << ", Y: " << user.getY() << endl;
                        map1.loadCharMap(user.getX(),user.getY()); //Print char map
                    }
                }
                else if (direction == 2) //Move South
                {
                    if (map1.getCharAtIndex(user.getX()+1, user.getY()) != "p" && map1.getCharAtIndex(user.getX()+1, user.getY()) != "C" && map1.getCharAtIndex(user.getX()+1, user.getY()) != "G") //If the move is not valid
                    {
                        cout << "Please choose another direction" << endl; 
                    }
                    else //Set new coordinates
                    {
                        user.setX(user.getX()+1);
                        cout << "Your new position is @ X: " << user.getX() << ", Y: " << user.getY() << endl;
                        map1.loadCharMap(user.getX(),user.getY()); //Print char map
                    }
                }
                else if (direction == 3) //Move East
                {
                    if (map1.getCharAtIndex(user.getX(), user.getY()+1) != "p" && map1.getCharAtIndex(user.getX(), user.getY()+1) != "C" && map1.getCharAtIndex(user.getX(), user.getY()+1) != "G") //If the move is not valid
                    {
                        cout << "Please choose another direction" << endl; 
                    }
                    else //Set new coordinates
                    {
                        user.setY(user.getY()+1);
                        cout << "Your new is @ X: " << user.getX() << ", Y: " << user.getY() << endl;
                        map1.loadCharMap(user.getX(),user.getY()); //Print char map
                    }
                }
                else if (direction == 4) //Move West
                {
                    if (map1.getCharAtIndex(user.getX(), user.getY()-1) != "p" && map1.getCharAtIndex(user.getX(), user.getY()-1) != "C" && map1.getCharAtIndex(user.getX(), user.getY()-1) != "G") //If the move is not valid
                    {
                        cout << "Please choose another direction" << endl; 
                    }
                    else //Set new coordinates
                    {
                        user.setY(user.getY()-1);
                        cout << "Your new position is @ X: " << user.getX() << ", Y: " << user.getY() << endl;
                        map1.loadCharMap(user.getX(),user.getY()); //Print char map
                    }
                }
                
                if (findNearestRandomPokemon(wildPokemonVector, user.getX(), user.getY())) //If found wildPokemon
                {
                    for (int i = 0; i < wildPokemonVector.size(); i++)
                    {
                        if (user.getX() == wildPokemonVector.at(i).getX() && user.getY() == wildPokemonVector.at(i).getY())
                        {
                            Pokemon wildPokemon; //Create new wildPokemon object
                            wildPokemon = wildPokemonVector.at(i);
                            Pokemon activePokemon; //Create active pokemon object
                            activePokemon = user.getParty(0); //Set active pokemon to user.getParty(0)
                            
                            cout << "You've ran into a wild Pokemon!" << endl;
                            cout << "Name: " << wildPokemon.getPokemonName() << ", HP: " << wildPokemon.getHP() << ", A: " << wildPokemon.getAttack() << 
                            ", D: " << wildPokemon.getDefense() << ", MA: " << wildPokemon.getMaxAttack() << ", MD: " << wildPokemon.getMaxDefense() << 
                            ", S:" << wildPokemon.getSpeed() << endl; //print wild pokemon stats
                            
                            cout << "You're ACTIVE Pokemon is: " << endl;
                            cout << "Name: " << activePokemon.getPokemonName() << ", HP: " << activePokemon.getHP() << ", A: " << activePokemon.getAttack() << 
                            ", D: " << activePokemon.getDefense() << ", MA: " << activePokemon.getMaxAttack() << ", MD: " << activePokemon.getMaxDefense() << 
                            ", S:" << activePokemon.getSpeed() << endl; //Print active pokemon stats
                            
                            cout << "What do you want to do (pick 1, 2, or 3): " << endl; //Pick from three options
                            
                            string wildEncounterString; //Define option input string
                            int wildEncounter; //Define option integer to be processed
                            wildEncounterOptions();
                            getline(cin, wildEncounterString); //Get lines from the file as a string
                            cin >> wildEncounterString;
                            wildEncounter = stoi(wildEncounterString); //Convert optionString to integer
                            cout << endl;
                            
                            while (wildEncounter != 3) //If the user doesn't select 3
                            {
                                if (wildEncounter == 1) //If the user chooses to fight
                                {
                                    int A = wildPokemon.getSpeed();
                                    int B = ((activePokemon.getSpeed()) / 4) % 256;
                                    int C = 1;
                                    
                                    cout << "A: " << A << endl;
                                    cout << "B: " << A << endl;
                                    cout << "C: " << A << endl;
                                    
                                    int F = ((((A * 32) / B) + 30) * C);
                                    cout << "F: " << F << endl;
                                    
                                    if (F > 255)
                                    {
                                        wildPokemon.setX(rand() % 17);
                                        wildPokemon.setY(rand() % 26);
                                        int x = wildPokemon.getX();
                                        int y = wildPokemon.getY();
                                        while (map1.getCharAtIndex(x,y) != "w" && map1.getCharAtIndex(x,y) != "C" && map1.getCharAtIndex(x,y) != "G") //Check to make sure that the random tile location is not water or a trainer or a pokemon center
                                        {
                                            wildPokemon.setX(rand() % 17);
                                            wildPokemon.setY(rand() % 26);
                                            x = wildPokemon.getX();
                                            y = wildPokemon.getY();
                                        }
                                        break;
                                    }
                                    else
                                    {
                                        int escapeRandom = rand() % 256;
                                        if (escapeRandom < F)
                                        {
                                            wildPokemon.setX(rand() % 17);
                                            wildPokemon.setY(rand() % 26);
                                            int x = wildPokemon.getX();
                                            int y = wildPokemon.getY();
                                            while (map1.getCharAtIndex(x,y) != "w" && map1.getCharAtIndex(x,y) != "C" && map1.getCharAtIndex(x,y) != "G") //Check to make sure that the random tile location is not water or a trainer or a pokemon center
                                            {
                                                wildPokemon.setX(rand() % 17);
                                                wildPokemon.setY(rand() % 26);
                                                x = wildPokemon.getX();
                                                y = wildPokemon.getY();
                                            }
                                            break;
                                        }
                                        C++;
                                    }
                                    /*
                                    Above checks to see if wildPokemonEscapes
                                    */
                                    
                                    if (wildPokemon.getSpeed() > activePokemon.getSpeed()) //See comments for trainer encounters
                                    {
                                        cout << wildPokemon.getPokemonName() << " attacks first" << endl;
                                        int wildPokemonAttack = rand() % wildPokemon.getAttack()+1;
                                        int activePokemonDefense = rand() % activePokemon.getDefense()+1;
                                        
                                        if (wildPokemonAttack > activePokemonDefense)
                                        {
                                            int wildPokemonDamageDone = wildPokemonAttack - activePokemonDefense;
                                            cout << wildPokemon.getPokemonName() << " deals " << wildPokemonDamageDone << " damage" << endl;
                                            activePokemon.setHP(activePokemon.getHP() - wildPokemonDamageDone);
                                            cout << "Name: " << wildPokemon.getPokemonName() << ", HP: " << wildPokemon.getHP() << ", A: " << wildPokemon.getAttack() << 
                                            ", D: " << wildPokemon.getDefense() << ", MA: " << wildPokemon.getMaxAttack() << ", MD: " << wildPokemon.getMaxDefense() << 
                                            ", S:" << wildPokemon.getSpeed() << endl;
                                            
                                            cout << "Name: " << activePokemon.getPokemonName() << ", HP: " << activePokemon.getHP() << ", A: " << activePokemon.getAttack() << 
                                            ", D: " << activePokemon.getDefense() << ", MA: " << activePokemon.getMaxAttack() << ", MD: " << activePokemon.getMaxDefense() << 
                                            ", S:" << activePokemon.getSpeed() << endl;
                                            
                                            cout << activePokemon.getPokemonName() << " attacks next" << endl;
                                            int activePokemonAttack1 = rand() % activePokemon.getAttack()+1;
                                            int wildPokemonDefense1 = rand() % wildPokemon.getDefense()+1;
                                            int activePokemonDamageDone1 = activePokemonAttack1 - wildPokemonDefense1;
                                            cout << activePokemon.getPokemonName() << " deals " << activePokemonDamageDone1 << " damage" << endl;
                                            wildPokemon.setHP(wildPokemon.getHP() - activePokemonDamageDone1);
                                             cout << "Name: " << wildPokemon.getPokemonName() << ", HP: " << wildPokemon.getHP() << ", A: " << wildPokemon.getAttack() << 
                                            ", D: " << wildPokemon.getDefense() << ", MA: " << wildPokemon.getMaxAttack() << ", MD: " << wildPokemon.getMaxDefense() << 
                                            ", S:" << wildPokemon.getSpeed() << endl;
                                        
                                            cout << "Name: " << activePokemon.getPokemonName() << ", HP: " << activePokemon.getHP() << ", A: " << activePokemon.getAttack() << 
                                            ", D: " << activePokemon.getDefense() << ", MA: " << activePokemon.getMaxAttack() << ", MD: " << activePokemon.getMaxDefense() << 
                                            ", S:" << activePokemon.getSpeed() << endl;
                                        }
                                
                                    }
                                    
                                    if (wildPokemon.getSpeed() < activePokemon.getSpeed()) //See comments for trainer encounters
                                    {
                                        cout << activePokemon.getPokemonName() << " attacks first" << endl;
                                        int activePokemonAttack = rand() % activePokemon.getAttack()+1;
                                        int wildPokemonDefense = rand() % wildPokemon.getDefense()+1;
                                        
                                        if (activePokemonAttack > wildPokemonDefense)
                                        {
                                            int activePokemonDamageDone = activePokemonAttack - wildPokemonDefense;
                                            cout << activePokemon.getPokemonName() << " deals " << activePokemonDamageDone << " damage" << endl;
                                            wildPokemon.setHP(wildPokemon.getHP() - activePokemonDamageDone);
                                            cout << "Name: " << wildPokemon.getPokemonName() << ", HP: " << wildPokemon.getHP() << ", A: " << wildPokemon.getAttack() << 
                                            ", D: " << wildPokemon.getDefense() << ", MA: " << wildPokemon.getMaxAttack() << ", MD: " << wildPokemon.getMaxDefense() << 
                                            ", S:" << wildPokemon.getSpeed() << endl;
                                            
                                            cout << "Name: " << activePokemon.getPokemonName() << ", HP: " << activePokemon.getHP() << ", A: " << activePokemon.getAttack() << 
                                            ", D: " << activePokemon.getDefense() << ", MA: " << activePokemon.getMaxAttack() << ", MD: " << activePokemon.getMaxDefense() << 
                                            ", S:" << activePokemon.getSpeed() << endl;
                                            
                                            cout << wildPokemon.getPokemonName() << " attacks next" << endl;
                                            int wildPokemonAttack1 = rand() % wildPokemon.getAttack()+1;
                                            int activePokemonDefense1 = rand() % activePokemon.getDefense()+1;
                                            int wildPokemonDamageDone1 = wildPokemonAttack1 - activePokemonDefense1;
                                            cout << wildPokemon.getPokemonName() << " deals " << wildPokemonDamageDone1 << " damage" << endl;
                                            activePokemon.setHP(activePokemon.getHP() - wildPokemonDamageDone1);
                                            cout << "Name: " << wildPokemon.getPokemonName() << ", HP: " << wildPokemon.getHP() << ", A: " << wildPokemon.getAttack() << 
                                            ", D: " << wildPokemon.getDefense() << ", MA: " << wildPokemon.getMaxAttack() << ", MD: " << wildPokemon.getMaxDefense() << 
                                            ", S:" << wildPokemon.getSpeed() << endl;
                                            
                                            cout << "Name: " << activePokemon.getPokemonName() << ", HP: " << activePokemon.getHP() << ", A: " << activePokemon.getAttack() << 
                                            ", D: " << activePokemon.getDefense() << ", MA: " << activePokemon.getMaxAttack() << ", MD: " << activePokemon.getMaxDefense() << 
                                            ", S:" << activePokemon.getSpeed() << endl;
                                        }
                                    }
                                    
                                    if (wildPokemon.getHP() <= 0) //If the wildPokemon faints
                                    {
                                        //wildPokemon.setHP(PokemonMaster.at(wildPokemon).getHP()); //THIS LINE NEEDS WORK
                                        if (user.getPartySize() < 6)
                                        {
                                            user.addPokemonToParty(wildPokemon); //Add the wildPokemon to the party if the party is less than 6
                                        }
                                        else
                                        {
                                            pokedex.addPokemon(wildPokemon); //Else store it in the pokedex
                                        }
                                        activePokemon.levelUpPokemon();
                                        activePokemon.setLevel(activePokemon.getLevel()+1); //Level up the active pokemon
                                        break;
                                    }
                                    else if (activePokemon.getHP() <= 0) //If the activePokemon is at zero HP
                                    {
                                        wildPokemon.levelUpPokemon();
                                        wildPokemon.setLevel(wildPokemon.getLevel()+1); //level up the wild Pokemon
                                    }
                                    else //If all of the user's pokemon have fainted
                                    {
                                        for (int i = 0; i < user.getPartySize(); i++)
                                        {
                                            if (user.getParty(i).getHP() == 0)
                                            {
                                                nearestPokemonCenter(map1,user,user.getX(), user.getY()); //Find nearest pokemon center
                                                break;
                                            }
                                        }
                                        wildPokemon.levelUpPokemon();
                                        wildPokemon.setLevel(wildPokemon.getLevel()+1); //Level up the wild pokemon
                                        break;
                                    }
                                }
                                
                                else if (wildEncounter == 2) //Switch active pokemon see trainer encounter comments
                                {
                                    string possiblePokemonSwitch;
                                    int pokemonSwitch;
                                    cout << "Pick another Active Pokémon: " << endl;
                                    Pokemon switchedPokemon;
                                    for (int i = 0; i < user.getPartySize(); i++)
                                    {
                                        cout << i+1 << ". "<< user.getParty(i).getPokemonName(); 
                                    }
                                    getline(cin, possiblePokemonSwitch); //Get lines from the file as a string
                                    cin >> possiblePokemonSwitch;
                                    pokemonSwitch = stoi(possiblePokemonSwitch); //Convert optionString to integer
                                    
                                    activePokemon = switchedPokemon;
                                    switchedPokemon = user.getParty(pokemonSwitch);
                                    user.getParty(pokemonSwitch) = activePokemon;
                                    cout << "Your ACTIVE Pokémon is: " << endl;
                                    cout << "Name: " << activePokemon.getPokemonName() << ", HP: " << activePokemon.getHP() << ", A: " << activePokemon.getAttack() << 
                                    ", D: " << activePokemon.getDefense() << ", MA: " << activePokemon.getMaxAttack() << ", MD: " << activePokemon.getMaxDefense() << 
                                    ", S:" << activePokemon.getSpeed() << endl;
                                }
                                
                                wildEncounterOptions();
                                getline(cin, wildEncounterString); //Get lines from the file as a string
                                cin >> wildEncounterString;
                                wildEncounter = stoi(wildEncounterString);
                            }
                            
                            if (wildEncounter == 3) //If the user chooses to run see comments for wild Pokemon to run
                            {
                                int ARun = activePokemon.getSpeed();
                                int BRun = ((wildPokemon.getSpeed() / 4) % 256);
                                int CRun = 1;
                                int FRun = ((((ARun * 32) / BRun) + 30) * CRun);
                                
                                if (wildPokemon.getSpeed() < activePokemon.getSpeed())
                                {
                                    //Find way to escape battle to pokemon Center
                                }
                                if (FRun > 255)
                                {
                                    wildPokemon.setX(rand() % 17); //Need to go to pokemon center
                                    wildPokemon.setY(rand() % 26); //Need to go to pokemon center
                                }
                                else if (FRun < 255)
                                {
                                    int escapeRandomRun = rand() % 256;
                                    if (escapeRandomRun < FRun)
                                    {
                                        wildPokemon.setX(rand() % 17); //Need to go to pokemon center
                                        wildPokemon.setY(rand() % 26); //Need to go to pokemon center
                                    }
                                }
                                else
                                {
                                    CRun++;
                                }
                            }
                        }
                    }
                    randomizePokemon(map1, wildPokemonVector);
                }
                
                if (map1.getCharAtIndex(user.getX(), user.getY()) == "G") //If the user lands on a gym
                {
                    for (int i = 0; i < gymLeaders.size(); i++) //Find nearest gymLeader given users coordinates
                    {
                        if (user.getX() == gymLeaders.at(i).getX() && user.getY() == gymLeaders.at(i).getY()) //Find nearest gymLeader given users coordinates
                        {
                            Trainer gymLeader; //Create a gymLeader trainer object
                            gymLeader = gymLeaders.at(i); //Set gymLeader equal to gymLeaders.at(i)
                            Pokemon activeGymLeaderPokemon; //Set first pokemon in gymLeaders party to active
                            activeGymLeaderPokemon = gymLeader.getParty(0);
                            Pokemon userActivePokemon; //Set first pokemon in user's party to userActivePokemon
                            userActivePokemon = user.getParty(0);
                            
                            cout << "You arrived at the Gym and the trainer is there. \n They want to fight. Their ACTIVE Pokémon is: " << endl;
                            cout << "Name: " << activeGymLeaderPokemon.getPokemonName() << ", HP: " << activeGymLeaderPokemon.getHP() << ", A: " << activeGymLeaderPokemon.getAttack() << 
                            ", D: " << activeGymLeaderPokemon.getDefense() << ", MA: " << activeGymLeaderPokemon.getMaxAttack() << ", MD: " << activeGymLeaderPokemon.getMaxDefense() << 
                            ", S:" << activeGymLeaderPokemon.getSpeed() << endl; //Print gymLeader Pokemon stats
                            
                            cout << "Your ACTIVE Pokémon is: " << endl;
                            cout << "Name: " << userActivePokemon.getPokemonName() << ", HP: " << userActivePokemon.getHP() << ", A: " << userActivePokemon.getAttack() << 
                            ", D: " << userActivePokemon.getDefense() << ", MA: " << userActivePokemon.getMaxAttack() << ", MD: " << userActivePokemon.getMaxDefense() << 
                            ", S:" << userActivePokemon.getSpeed() << endl; //Print user Pokemon stats
                            
                            cout << endl;
                    
                            cout << "What do you want to do (pick 1 or 2): " << endl; //Pick between fight and switch pokemon
                            
                            string trainerEncounterString; //Define option input string
                            int trainerEncounter; //Define option integer to be processed
                            trainerEncounterOptions();
                            getline(cin, trainerEncounterString); //Get lines from the file as a string
                            cin >> trainerEncounterString;
                            trainerEncounter = stoi(trainerEncounterString); //Convert optionString to integer
                            cout << endl;
                            
                            while (trainerEncounter != 3) //While trainerEncounter does not equal 3
                            {
                                if (trainerEncounter > 2 || trainerEncounter < 1) //Error handling for invalid option
                                {
                                    cout << "Invalid choice. Please choose again." << endl;
                                }
                                else if (trainerEncounter == 1) //If the user chooses fight
                                {
                                    if (activeGymLeaderPokemon.getSpeed() > userActivePokemon.getSpeed()) //If the gymLeader pokemon has higher speed than user active pokemon
                                    {
                                        cout << activeGymLeaderPokemon.getPokemonName() << " attacks first" << endl; //GymLeader pokemon attacks first
                                        int activeGymLeaderPokemonAttack = rand() % activeGymLeaderPokemon.getAttack()+1; //Generate random attack value
                                        int userActivePokemonDefense = rand() % userActivePokemon.getDefense()+1; //Generate random defense value
                                        
                                        if (activeGymLeaderPokemonAttack > userActivePokemonDefense) //If the attack is greater than defense
                                        {
                                            int activeGymLeaderPokemonDamageDone = activeGymLeaderPokemonAttack - userActivePokemonDefense; //Create damage value
                                            cout << activeGymLeaderPokemon.getPokemonName() << " deals " << activeGymLeaderPokemonDamageDone << " damage" << endl;
                                            userActivePokemon.setHP(userActivePokemon.getHP() - activeGymLeaderPokemonDamageDone); //Set active pokemon HP to current HP minus damage
                                            Pokemon replacePokemon; //Create a replace Pokemon to prevent pass by value
                                            replacePokemon = userActivePokemon; //Store activePokemon in replace pokemon
                                            user.getParty(0) = replacePokemon; //Set user.getParty(0) to replacePokemon
                                            cout << "Name: " << activeGymLeaderPokemon.getPokemonName() << ", HP: " << activeGymLeaderPokemon.getHP() << ", A: " << activeGymLeaderPokemon.getAttack() << 
                                            ", D: " << activeGymLeaderPokemon.getDefense() << ", MA: " << activeGymLeaderPokemon.getMaxAttack() << ", MD: " << activeGymLeaderPokemon.getMaxDefense() << 
                                            ", S:" << activeGymLeaderPokemon.getSpeed() << endl; //Print activeGymLeader pokemon stats
                                            
                                            cout << "Name: " << userActivePokemon.getPokemonName() << ", HP: " << userActivePokemon.getHP() << ", A: " << userActivePokemon.getAttack() << 
                                            ", D: " << userActivePokemon.getDefense() << ", MA: " << userActivePokemon.getMaxAttack() << ", MD: " << userActivePokemon.getMaxDefense() << 
                                            ", S:" << userActivePokemon.getSpeed() << endl; //Print user active pokemon stats
                                            
                                            if (userActivePokemon.getHP() <= 0) //If pokemon has fainted, switch pokemon...see option 2
                                            {
                                                cout << "Your active pokemon has fainted. Please switch your active pokemon." << endl;
                                                userActivePokemon.setHP(0);
                                                string possiblePokemonSwitch;
                                                int pokemonSwitch;
                                                cout << "Pick another Active Pokémon: " << endl;
                                                Pokemon switchedPokemon;
                                                for (int i = 0; i < user.getPartySize(); i++)
                                                {
                                                    cout << i+1 << ". "<< user.getParty(i).getPokemonName() << endl; 
                                                }
                                                getline(cin, possiblePokemonSwitch); //Get lines from the file as a string
                                                cin >> possiblePokemonSwitch;
                                                pokemonSwitch = stoi(possiblePokemonSwitch); //Convert optionString to integer
                                                
                                                switchedPokemon = user.getParty(pokemonSwitch-1);
                                                userActivePokemon = switchedPokemon;
                                                user.getParty(pokemonSwitch-1) = userActivePokemon;
                                                cout << "Your ACTIVE Pokémon is: " << endl;
                                                cout << "Name: " << userActivePokemon.getPokemonName() << ", HP: " << userActivePokemon.getHP() << ", A: " << userActivePokemon.getAttack() << 
                                                ", D: " << userActivePokemon.getDefense() << ", MA: " << userActivePokemon.getMaxAttack() << ", MD: " << userActivePokemon.getMaxDefense() << 
                                                ", S:" << userActivePokemon.getSpeed() << endl;
                                            }
                                        }   
                                        else //Else the gymLeader pokemon does no damage
                                        {
                                            cout << activeGymLeaderPokemon.getPokemonName() << " does no damage." << endl;
                                        }
                                        
                                        cout << userActivePokemon.getPokemonName() << " attacks next" << endl; //User Active pokemon attacks next
                                        int userActivePokemonAttack1 = rand() % userActivePokemon.getAttack()+1; //Generate attack value
                                        int activeGymLeaderPokemonDefense1 = rand() % activeGymLeaderPokemon.getDefense()+1; //Generate random defense value
                                        
                                        if (userActivePokemonAttack1 > activeGymLeaderPokemonDefense1) //If the attack is greater than defense
                                        {
                                            int userActivePokemonDamageDone1 = userActivePokemonAttack1 - activeGymLeaderPokemonDefense1; //Create damaage value
                                            cout << userActivePokemon.getPokemonName() << " deals " << userActivePokemonDamageDone1 << " damage" << endl;
                                            activeGymLeaderPokemon.setHP(activeGymLeaderPokemon.getHP() - userActivePokemonDamageDone1); //Set activeGymLeaderPokemon with account to damage done
                                             cout << "Name: " << activeGymLeaderPokemon.getPokemonName() << ", HP: " << activeGymLeaderPokemon.getHP() << ", A: " << activeGymLeaderPokemon.getAttack() << 
                                            ", D: " << activeGymLeaderPokemon.getDefense() << ", MA: " << activeGymLeaderPokemon.getMaxAttack() << ", MD: " << activeGymLeaderPokemon.getMaxDefense() << 
                                            ", S:" << activeGymLeaderPokemon.getSpeed() << endl; //Print gymLeader pokemon stats
                                        
                                            cout << "Name: " << userActivePokemon.getPokemonName() << ", HP: " << userActivePokemon.getHP() << ", A: " << userActivePokemon.getAttack() << 
                                            ", D: " << userActivePokemon.getDefense() << ", MA: " << userActivePokemon.getMaxAttack() << ", MD: " << userActivePokemon.getMaxDefense() << 
                                            ", S:" << userActivePokemon.getSpeed() << endl; //Print activePokemon pokemon stats
                                            
                                            if (activeGymLeaderPokemon.getHP() <= 0) //If the gymLeader pokemon faints
                                            {
                                                cout << "Your active pokemon has fainted. Please switch your active pokemon." << endl;
                                                for (int i = 0; i < gymLeader.getPartySize(); i++) //Summon the next pokemon in the gymLeaders party
                                                {
                                                    activeGymLeaderPokemon = gymLeader.getParty(i+1);
                                                    break;
                                                }
                                                cout << "The next Active Pokemon from the Gym Leader is: " << endl; 
                                                cout << "Name: " << activeGymLeaderPokemon.getPokemonName() << ", HP: " << activeGymLeaderPokemon.getHP() << ", A: " << activeGymLeaderPokemon.getAttack() << 
                                                ", D: " << activeGymLeaderPokemon.getDefense() << ", MA: " << activeGymLeaderPokemon.getMaxAttack() << ", MD: " << activeGymLeaderPokemon.getMaxDefense() << 
                                                ", S:" << activeGymLeaderPokemon.getSpeed() << endl; //Print out new gymLeader Pokemon stats
                                            }
                                        }
                                        else //The user active pokemon does no damage
                                        {
                                            cout << userActivePokemon.getPokemonName() << " does zero damage." << endl;
                                        }
                                    }
                                    
                                    else if (activeGymLeaderPokemon.getSpeed() < userActivePokemon.getSpeed()) //If the gymLeader speed is less than the user active pokemon speed
                                    {
                                        cout << userActivePokemon.getPokemonName() << " attacks first" << endl; //User active pokemon attacks first
                                        int userActivePokemonAttack = rand() % userActivePokemon.getAttack()+1; //Generate random attack value
                                        int activeGymLeaderPokemonDefense = rand() % activeGymLeaderPokemon.getDefense()+1; //Generate random defense value
                                        
                                        if (userActivePokemonAttack > activeGymLeaderPokemonDefense) //If the attack is greater than defense
                                        {
                                            int userActivePokemonDamageDone = userActivePokemonAttack - activeGymLeaderPokemonDefense; //Create damage value
                                            cout << userActivePokemon.getPokemonName() << " deals " << userActivePokemonDamageDone << " damage" << endl; 
                                            activeGymLeaderPokemon.setHP(activeGymLeaderPokemon.getHP() - userActivePokemonDamageDone); //Set gymLeader pokemon HP accounting for damage
                                            cout << "Name: " << activeGymLeaderPokemon.getPokemonName() << ", HP: " << activeGymLeaderPokemon.getHP() << ", A: " << activeGymLeaderPokemon.getAttack() << 
                                            ", D: " << activeGymLeaderPokemon.getDefense() << ", MA: " << activeGymLeaderPokemon.getMaxAttack() << ", MD: " << activeGymLeaderPokemon.getMaxDefense() << 
                                            ", S:" << activeGymLeaderPokemon.getSpeed() << endl; //Print out gymLeader pokemon stats
                                            
                                            cout << "Name: " << userActivePokemon.getPokemonName() << ", HP: " << userActivePokemon.getHP() << ", A: " << userActivePokemon.getAttack() << 
                                            ", D: " << userActivePokemon.getDefense() << ", MA: " << userActivePokemon.getMaxAttack() << ", MD: " << userActivePokemon.getMaxDefense() << 
                                            ", S:" << userActivePokemon.getSpeed() << endl; //Print out activeLeader pokemon stats
                                            
                                            if (activeGymLeaderPokemon.getHP() <= 0) //If the gymLeader pokemon faints
                                            {
                                                cout << "Your active pokemon has fainted. Please switch your active pokemon." << endl;
                                                for (int i = 0; i < gymLeader.getPartySize(); i++) //Generate next pokemon in gymLeader's party
                                                {
                                                    activeGymLeaderPokemon = gymLeader.getParty(i+1);
                                                    break;
                                                }
                                                cout << "The next Active Pokemon from the Gym Leader is: " << endl;
                                                cout << "Name: " << activeGymLeaderPokemon.getPokemonName() << ", HP: " << activeGymLeaderPokemon.getHP() << ", A: " << activeGymLeaderPokemon.getAttack() << 
                                                ", D: " << activeGymLeaderPokemon.getDefense() << ", MA: " << activeGymLeaderPokemon.getMaxAttack() << ", MD: " << activeGymLeaderPokemon.getMaxDefense() << 
                                                ", S:" << activeGymLeaderPokemon.getSpeed() << endl; //Print out new active pokemon stats
                                            }
                                        }
                                        else //else user Active pokemon does zero damage
                                        {
                                            cout << userActivePokemon.getPokemonName() << " does zero damage." << endl;
                                        }
                                        
                                        cout << activeGymLeaderPokemon.getPokemonName() << " attacks next" << endl; //GymLeader pokemon attacks next
                                        int activeGymLeaderPokemonAttack1 = rand() % activeGymLeaderPokemon.getAttack()+1; //Generate random attack value
                                        int userActivePokemonDefense1 = rand() % userActivePokemon.getDefense()+1; //Generate random defense value
                                            
                                        if (activeGymLeaderPokemonAttack1 > userActivePokemonDefense1) //If the attack is greater than the defense
                                        {
                                            int activeGymLeaderPokemonDamageDone1 = activeGymLeaderPokemonAttack1 - userActivePokemonDefense1; //Create new damage value
                                            cout << activeGymLeaderPokemon.getPokemonName() << " deals " << activeGymLeaderPokemonDamageDone1 << " damage" << endl; 
                                            userActivePokemon.setHP(userActivePokemon.getHP() - activeGymLeaderPokemonDamageDone1); //Set userActivePokemon HP accounting for damage
                                            cout << "Name: " << activeGymLeaderPokemon.getPokemonName() << ", HP: " << activeGymLeaderPokemon.getHP() << ", A: " << activeGymLeaderPokemon.getAttack() << 
                                            ", D: " << activeGymLeaderPokemon.getDefense() << ", MA: " << activeGymLeaderPokemon.getMaxAttack() << ", MD: " << activeGymLeaderPokemon.getMaxDefense() << 
                                            ", S:" << activeGymLeaderPokemon.getSpeed() << endl; //Print out gymleader pokemon stats
                                            
                                            cout << "Name: " << userActivePokemon.getPokemonName() << ", HP: " << userActivePokemon.getHP() << ", A: " << userActivePokemon.getAttack() << 
                                            ", D: " << userActivePokemon.getDefense() << ", MA: " << userActivePokemon.getMaxAttack() << ", MD: " << userActivePokemon.getMaxDefense() << 
                                            ", S:" << userActivePokemon.getSpeed() << endl; //Print out userActivePokemon pokemon stats
                                            
                                            if (userActivePokemon.getHP() <= 0) //If the user Pokemon faints...see option 2
                                            {
                                                cout << "Your active pokemon has fainted. Please switch your active pokemon." << endl;
                                                userActivePokemon.setHP(0);
                                                string possiblePokemonSwitch;
                                                int pokemonSwitch;
                                                cout << "Pick another Active Pokémon: " << endl;
                                                Pokemon switchedPokemon;
                                                for (int i = 0; i < user.getPartySize(); i++)
                                                {
                                                    cout << i+1 << ". "<< user.getParty(i).getPokemonName() << endl; 
                                                }
                                                getline(cin, possiblePokemonSwitch); //Get lines from the file as a string
                                                cin >> possiblePokemonSwitch;
                                                pokemonSwitch = stoi(possiblePokemonSwitch); //Convert optionString to integer
                                                
                                                switchedPokemon = user.getParty(pokemonSwitch-1);
                                                userActivePokemon = switchedPokemon;
                                                user.getParty(pokemonSwitch-1) = userActivePokemon;
                                                cout << "Your ACTIVE Pokémon is: " << endl;
                                                cout << "Name: " << userActivePokemon.getPokemonName() << ", HP: " << userActivePokemon.getHP() << ", A: " << userActivePokemon.getAttack() << 
                                                ", D: " << userActivePokemon.getDefense() << ", MA: " << userActivePokemon.getMaxAttack() << ", MD: " << userActivePokemon.getMaxDefense() << 
                                                ", S:" << userActivePokemon.getSpeed() << endl; //Print out new activePokemons stats
                                            }
                                        }
                                        else //Else the gymLeader pokemon does no damage
                                        {
                                            cout << activeGymLeaderPokemon.getPokemonName() << " does no damage." << endl;
                                        }
                                    }
                                }
                                else //If the user chooses to switch pokemon
                                {
                                    string possiblePokemonSwitch; //Create new Possible pokemon switch string
                                    int pokemonSwitch; //Create new pokemonSwitch integer
                                    cout << "Pick another Active Pokémon: " << endl; //Pick another active pokemon
                                    Pokemon switchedPokemon; //Create new switchedPokemon pokemon object
                                    for (int i = 0; i < user.getPartySize(); i++) //Print out all pokemon in the party
                                    {
                                        cout << i+1 << ". "<< user.getParty(i).getPokemonName() << endl; 
                                    }
                                    getline(cin, possiblePokemonSwitch); //Get lines from the file as a string
                                    cin >> possiblePokemonSwitch;
                                    pokemonSwitch = stoi(possiblePokemonSwitch); //Convert optionString to integer
                                    
                                    switchedPokemon = user.getParty(pokemonSwitch-1); //Switch active pokemon with user selected switched pokemon
                                    userActivePokemon = switchedPokemon;
                                    user.getParty(pokemonSwitch-1) = userActivePokemon;
                                    cout << "Your ACTIVE Pokémon is: " << endl;
                                    cout << "Name: " << userActivePokemon.getPokemonName() << ", HP: " << userActivePokemon.getHP() << ", A: " << userActivePokemon.getAttack() << 
                                    ", D: " << userActivePokemon.getDefense() << ", MA: " << userActivePokemon.getMaxAttack() << ", MD: " << userActivePokemon.getMaxDefense() << 
                                    ", S:" << userActivePokemon.getSpeed() << endl; //Print out new active pokemon stats
                                }
                                
                                for (int i = 0; i < user.getPartySize(); i++) //Check to see if all of the user's pokemon have fainted
                                {
                                    if (user.getParty(i).getHP() <= 0) //If all of the pokemon faint in the party, transport user to nearest pokemon center
                                    {
                                        cout << "All of your Pokemon have fainted! You have lost against this Trainer. You will be transported to the nearest Pokemon Center." << endl;
                                        gymLeader.getParty(0).levelUpPokemon();
                                        gymLeader.getParty(0).setLevel(gymLeader.getParty(0).getLevel()+1); //Level up gymLeader Pokemon
                                        nearestPokemonCenter(map1, user, user.getX(), user.getY()); //Find nearest pokemon center
                                        break; //Break out of the loop
                                    }
                                    break;
                                }
                                
                                for (int i = 0; i < gymLeader.getPartySize(); i++) //Check to see if all of the gymLeader's pokemon have fainted
                                {
                                    if (gymLeader.getParty(i).getHP() <= 0) //If all of the pokemon in the gymLeaders party have fainted
                                    {
                                        cout << "Congratulations. You have beaten the gym Leader." << endl;
                                        for (int j = 0; j < 6 - user.getPartySize(); j++) // Loop through all of the gymLeaders party and add pokemon to it
                                        {
                                            user.addPokemonToParty(gymLeader.getParty(j)); //Acquires pokemon
                                            pokedex.addPokemon(gymLeader.getParty(j));
                                        }
                                        for (int k = 6-user.getPartySize(); k < gymLeader.getPartySize(); k++)
                                        {
                                            pokedex.addPokemon(gymLeader.getParty(k)); //Store remaining pokemon in pokedex
                                        }
                                        userActivePokemon.levelUpPokemon();
                                        userActivePokemon.setLevel(userActivePokemon.getLevel()+1); //Active poke levels up
                                        user.setBadges(user.getBadges()+1); //Badges increase
                                        user.setPokeballs(user.getPokeballs()+10); //Pokeball increase
                                        user.setPoints(user.getPoints()+60); //Points increase
                                        break;
                                    }
                                    break;
                                }
                                
                                cout << "What do you want to do (pick 1 or 2): " << endl; //Print out the trainer options
                                trainerEncounterOptions();
                                getline(cin, trainerEncounterString); //Get lines from the file as a string
                                cin >> trainerEncounterString;
                                trainerEncounter = stoi(trainerEncounterString); //Convert optionString to integer
                                cout << endl;
                            }
                        }
                    }
                }
                
                else if (map1.getCharAtIndex(user.getX(), user.getY()) == "C") //If the user goes to a pokeCenter
                {
                    for (int i = 0; i < pokeCenters.size(); i++) //Find nearest Pokemon Center
                    {
                        if (user.getX() == pokeCenters.at(i).getX() && user.getY() == pokeCenters.at(i).getY())
                        {
                            PokeCenter activePokeCenter; //Create pokeCenter variable to store nearest pokemon Center
                            activePokeCenter = pokeCenters.at(i); //Store in activePokeCenter
                            activePokeCenter.healPokemon(PokemonMaster, user.returnParty()); //Heal all pokemon in user's party
                            
                            string wantToChangePokemon; //Ask the user if they want to change pokemon
                            cout << "Welcome to the Pokémon Center. All Pokémon in your party have been healed. Do you want to change the members of your party (Y/N): " << endl;
                            cin >> wantToChangePokemon;
                            if (wantToChangePokemon != "Y" && wantToChangePokemon != "N") //If the input is invalid
                            {
                                cout << "Please indicate if you want to change Pokemon" << endl;
                            }
                            else if (wantToChangePokemon == "Y") //If the user wants to change pokemon
                            {
                                int swapPokemonPokedex;
                                cout << "Here are all the Pokémon in your Pokédex. Choose a number to individually add Pokemon to your Party (at most 6): " << endl;
                                for (int i = 0; i < user.getPartySize(); i++)
                                {
                                    user.getPartyVector().erase(user.getPartyVector().begin()+i);
                                }
                                while (user.getPartySize() < 6) //While the user chooses six random pokemon
                                {
                                    for (int i = 0; i < pokedex.getNumPokemonFound(); i++) //Print out pokemon in the pokedex
                                    {
                                        cout << i+1 << ". " << pokedex.getPokemon(i).getPokemonName() << endl;
                                    }
                                    cin >> swapPokemonPokedex;
                                    user.addPokemonToParty(pokedex.getPokemon(swapPokemonPokedex-1)); //Add pokemon selected to party
                                }
                                int chooseActive; //Choose active pokemon
                                cout << "Here are the Pokemon you have chosen: " << endl;
                                for (int i = 0; i < user.getPartySize(); i++) //Display all chosen pokemon
                                {
                                    cout << i+1 << ". " << user.getParty(i).getPokemonName() << endl;
                                }
                                cin >> chooseActive;
                                cout << "Your ACTIVE Pokémon is: " << endl;
                                cout << "Name: " << user.getParty(chooseActive-1).getPokemonName() << ", HP: " << user.getParty(chooseActive-1).getHP() << ", A: " << user.getParty(chooseActive-1).getAttack() << 
                                ", D: " << user.getParty(chooseActive-1).getDefense() << ", MA: " << user.getParty(chooseActive-1).getMaxAttack() << ", MD: " << user.getParty(chooseActive-1).getMaxDefense() << 
                                ", S:" << user.getParty(chooseActive-1).getSpeed() << endl; //Print out active pokemon's stats
                            }
                            else if (wantToChangePokemon == "N") //If the user chooses no
                            {
                                map1.loadCharMap(user.getX(),user.getY()); //Print out the char map and user continues traveling
                            }
                        }
                    }
                }
            }
            
        else if (playerOption == 2) //Rest
        {
            for (int i = 0; i < user.getPartySize(); i++) //Loop through party and increase HP by 1 for each pokemon
            {
                user.getParty(i).setHP(user.getParty(i).getHP()+1);
            }
            user.setPokeballs(user.getPokeballs()-1); //Decrease the number of pokeballs by one
            
            cout << endl;
            cout << "You have " << user.getPokeballs() << " pokeballs remaining." << endl;
            cout << endl;
            map1.loadCharMap(user.getX(),user.getY()); //Print out the char map
        }
        
        else if (playerOption == 3) //Try your luck
        {
            if (findNearestRandomPokemon(wildPokemonVector, user.getX(), user.getY()))
            {
                for (int i = 0; i < wildPokemonVector.size(); i++)
                {
                    if (user.getPartySize() < 6)
                    {
                        user.addPokemonToParty(wildPokemonVector.at(i));
                    }
                    else
                    {
                        pokedex.addPokemon(wildPokemonVector.at(i));
                    }
                }
            }
            map1.loadCharMap(user.getX(),user.getY()); //Print out char map
        }
        
        cout << endl;
        cout << "Num of Pokeballs: " << user.getPokeballs() << endl; //Print out number of pokemon
        cout << endl;
        for (int i = 0; i < user.getPartySize(); i++)
        {
            cout << i+1 << ". " << "Name: " << user.getParty(i).getPokemonName() << ", HP: " << user.getParty(i).getHP() << ", A: " << user.getParty(i).getAttack() << 
            ", D: " << user.getParty(i).getDefense() << ", MA: " << user.getParty(i).getMaxAttack() << ", MD: " << user.getParty(i).getMaxDefense() << 
            ", S:" << user.getParty(i).getSpeed() << endl; //Print out active pokemon's stats
            cout << endl;
        }
        cout << "Your ACTIVE Pokémon is: " << endl;
        cout << "Name: " << user.getParty(0).getPokemonName() << ", HP: " << user.getParty(0).getHP() << ", A: " << user.getParty(0).getAttack() << 
        ", D: " << user.getParty(0).getDefense() << ", MA: " << user.getParty(0).getMaxAttack() << ", MD: " << user.getParty(0).getMaxDefense() << 
        ", S:" << user.getParty(0).getSpeed() << endl; //Print out active pokemon's stats
        cout << endl;
        
        int randomChanceWildPokemon = rand() % 101; //Generate a random number between 0 and 100
        if (randomChanceWildPokemon <= 30) //30% chance
        {
            int randomWildChancePokemon = rand() % wildPokemonVector.size(); //Generate a random pokemon from the wild pokemon vector
            string wantToCatch; //Yes or no if want to catch
            cout << "Suddenly " << wildPokemonVector.at(randomWildChancePokemon).getPokemonName() << " appeared. Do you want to catch it (Y/N):" << endl;
            cin >> wantToCatch; //Store input in wantToCatch
            if (wantToCatch != "Y" && wantToCatch != "N") //Error handling
            {
                cout << "Please choose an option" << endl;
            }
            else if (wantToCatch == "Y") //If the user chooses Yes
            {
                if (user.getPartySize() < 6) //if the party has less than six pokemon
                {
                    user.addPokemonToParty(wildPokemonVector.at(randomWildChancePokemon)); //Add pokemon to the party
                    pokedex.addPokemon(wildPokemonVector.at(randomWildChancePokemon)); //Add pokemon to pokedex
                    cout << "Awesome! " << wildPokemonVector.at(randomWildChancePokemon).getPokemonName() << " joins the party." << endl;
                }
                else //If the party is full
                {
                    pokedex.addPokemon(wildPokemonVector.at(randomWildChancePokemon)); //Just add it to the pokedex
                    cout << "Awesome! " << wildPokemonVector.at(randomWildChancePokemon).getPokemonName() << " joins the pokedex." << endl;
                }
                user.setPokeballs(user.getPokeballs()-1); //Decrease pokeballs by one
            }
        }
        
        int randomTreasureChance = rand() % 101; //Generate a random number between 100
        if (randomTreasureChance <= 25) //If the percent is 25%
        {
            user.setPokeballs(user.getPokeballs()+2); //Add two pokeballs
            cout << "Great news! You have stumbled upon a hidden stash of Pokéballs. Your reserves increased to " << user.getPokeballs() << " Pokéballs." << endl;
            cout << "Great news! You have stumbled upon a hidden stash of Poffins. Your Pokémon are delighted. Choose one of them to feast on the Poffins and Level Up: " << endl;
            cout << endl;
            int levelUpPokemon; //Level up pokemon
            for (int i = 0; i < user.getPartySize(); i++) //Display all chosen pokemon
            {
                cout << i+1 << ". " << user.getParty(i).getPokemonName() << endl;
            } 
            cin >> levelUpPokemon; //Store in levelUpPokemon
            user.getParty(levelUpPokemon-1).levelUpPokemon(); //Level up selected pokemon
            user.getParty(levelUpPokemon-1).setLevel(user.getParty(levelUpPokemon-1).getLevel()+1); //Set numerical level
        }
        
        int randomPokemonDeath = rand() % 101; //Death
        if (randomPokemonDeath <= 20) //If the number is less or equal than 20
        {
            int randPokemonDeathParty = rand() % user.getPartySize(); //Generate a random index in the party
            if (user.getPartySize() > 1) //If the party size is greater than 1
            {
                cout << "Oh no! After years of legendary battles, " << user.getParty(randPokemonDeathParty).getPokemonName() << " died of old age. Thank you for your companionship, dear friend." << endl;
                user.getPartyVector().erase(user.getPartyVector().begin()+randPokemonDeathParty); //Delete the pokemon at the death index with erase function
                pokedex.erasePokemon(randPokemonDeathParty); //Erase pokemon out of pokedex
                if (randPokemonDeathParty == 0) //If the death occurs at active pokemon spot
                {
                    int newActivePokemon;
                    cout << "Choose a new active pokemon." << endl; //Choose a new active pokemon
                    for (int i = 1; i < user.getPartySize(); i++)
                    {
                        cout << i << ". " << user.getParty(i).getPokemonName() << endl;
                    }
                    cin >> newActivePokemon;
                    user.getParty(0) = user.getParty(newActivePokemon); //Set active pokemon to newActivePokemon
                }
            }
        }
        
        cout << endl;
        cout << "Num of Pokeballs: " << user.getPokeballs() << endl; //Print out number of pokemon
        cout << endl;
        for (int i = 0; i < user.getPartySize(); i++) //Print out stats of party pokemon
        {
            cout << i+1 << ". " << "Name: " << user.getParty(i).getPokemonName() << ", HP: " << user.getParty(i).getHP() << ", A: " << user.getParty(i).getAttack() << 
            ", D: " << user.getParty(i).getDefense() << ", MA: " << user.getParty(i).getMaxAttack() << ", MD: " << user.getParty(i).getMaxDefense() << 
            ", S:" << user.getParty(i).getSpeed() << endl; //Print out active pokemon's stats
            cout << endl;
        }
        cout << "Your ACTIVE Pokémon is: " << endl; //Print out active pokemon stats
        cout << "Name: " << user.getParty(0).getPokemonName() << ", HP: " << user.getParty(0).getHP() << ", A: " << user.getParty(0).getAttack() << 
        ", D: " << user.getParty(0).getDefense() << ", MA: " << user.getParty(0).getMaxAttack() << ", MD: " << user.getParty(0).getMaxDefense() << 
        ", S:" << user.getParty(0).getSpeed() << endl; //Print out active pokemon's stats
        cout << endl;
        
        cout << endl;
        playerOptions(); //Print out player options
        getline(cin, playerOptionString); //Get user input
        cin >> playerOptionString;
        playerOption = stoi(playerOptionString); //Convert string to int playerOption
    }
    
    if (playerOption == 4) //Quit the game
    {
        if (user.getBadges() == 6) //If the user has six badges
        {
            cout << "Congratulations! You won the game. Please see results.txt to see how you did. If you want to play again, simply press the run button to run \n the program again and reset wild Pokemon and Trainers." << endl; //Win game
            user.setWonGame(true); //Set wonGame to true
            ofstream results; //Create output file stream of results
            results.open("results.txt", std::ios_base::app); //Write to results.txt
            results << "Trainer,Won/Lost,Points,Badges" << endl;
            results << user.getTrainerName() << ", " << user.WonGame() <<  ", " << user.getPoints() << ", " << user.getBadges() << endl;
            return;
        }
        else //The user loses
        {
            cout << "Game Over. You Lost. Please see results.txt to see how you did. If you want to play again, simply press the run button to run \n the program again and reset wild Pokemon and Trainers." << endl; //The user loses
            user.setWonGame(false); //Set wonGame false
            ofstream results; //Create output file stream of results
            results.open("results.txt", std::ios_base::app); //Write to results.txt
            results << "Trainer,Won/Lost,Points,Badges" << endl;
            results << user.getTrainerName() << ", " << user.WonGame() << ", " << user.getPoints() << ", " << user.getBadges() << endl;
            return;
        }
    }
    
    cout << endl;
}

int main()
{
    driver();
}