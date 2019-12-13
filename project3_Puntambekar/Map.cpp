#include <iostream>
#include <vector>
#include <fstream>
#include "Map.h"
#include "Pokemon.h"
#include "Trainer.h"
using namespace std;

int split(string inputString, char delimiter, string storageArray[], int lengthOfArray) //This algorithm splits a string based on delimiters and stores the split strings into a string array
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

Map::Map() //Constructs map
{
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 25; j++)
        {
            mapArray[i][j] = "";
        }
    }
}

void Map::loadMap(string fileName) //Loads map in a txt file
{
    ifstream map;
    map.open(fileName);
    int index = 0; 
    string line = "";
    if (map.fail())
    {
        cout << "The map has failed to open" << endl;
    }
    else
    {
        while (getline(map,line))
        {
            string mapStorageArray[16];
            split(line, ',', mapStorageArray, 16);
            for (int i = 0; i < 16; i++)
            {
                mapArray[index][i] = mapStorageArray[i];
                cout << " " << mapArray[index][i];
            }
            index++;
            cout << endl;
        }
    }
}

string Map::getCharAtIndex(int i, int j) //Gets the char at an index in the mapArray
{
    return mapArray[i][j];
}

void Map::setCharAtIndex(int i, int j, string newChar) //Set char at index
{
    mapArray[i][j] = newChar;
}

void Map::printMap() //Print map
{
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            cout << " " << mapArray[i][j];
        }
        cout << endl;
    }
}

// void Map::loadCharMap(Trainer object, Map map)
// {
//     int X = object.getX();
//     int Y = object.getY();
//     cout << "@" << endl;
    
//     for (int i = X-3; i < X-4; i++)
//     {
//         for (int j = Y-3; j < Y-4; i++)
//         {
//             if (map.getCharAtIndex(i,j) == "w")
//             {
//                 cout << " " <<  "~";
//             }
            
//             else if (map.getCharAtIndex(i,j) == "p")
//             {
//                 cout << " "  << "*";
//             }
            
//             else if (map.getCharAtIndex(i,j) == "C")
//             {
//                 cout << " " << "C";
//             }
            
//             else if (map.getCharAtIndex(i,j) == "G")
//             {
//                 cout << " "  << "G";
//             }
//         }
//     }
// }

void Map::loadCharMap(int rows, int columns) //Prints 7x7 array
{
  for(int s = -3;s <= 3; s++) 
  {
      for (int i = -3; i <= 3; i++) 
      {
          if (rows + s >= 0 && rows + s < 25) 
          {
              if (columns + i >= 0 && columns + i < 16) 
              {
                  if(s == 0 && i == 0) 
                  {
                      cout<<" @";
                  }
                  else
                  {
                      if (mapArray[rows + s][columns + i] == "w")
                      {
                        cout << " " << "~";
                      }
                      else if (mapArray[rows + s][columns + i] == "p")
                      {
                          cout << " " << "*";
                      }
                      else
                      {
                          cout << " " << mapArray[rows + s][columns + i];
                      }
                  }
                }
                else 
                {
                  cout << " x";
              }
          } 
          else 
          {
              cout << " x";
          }
      }
      cout<<endl;
  }
//    for(int i=0;i<25;i++){
//        for(int s=0;s<16;s++){
//            cout<<Map[i][s];
//        }
//        cout<<endl;
//    }
}

// void Map::randomizePokemon(Map map, vector<Pokemon> Pokemons) //Randomizes pokemon throughout the map array
// {
//     for (int i = 0; i < Pokemons.size(); i++)
//     {
//         while (getCharAtIndex)
//         Pokemons.at(i).setX(rand() % 17);
//         Pokemons.at(i).setY(rand() % 26);
//     }
// }