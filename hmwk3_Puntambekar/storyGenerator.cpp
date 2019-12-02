//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 3 - Problem EC

#include <iostream>
using namespace std;

void storyGenerator() //This algorithm takes user input and creates a Madlibs game
{
    int storyNumber = 0; //Initialize variable storyNumber to 0
    
    while (storyNumber != 4 && storyNumber <= 4) //While storyNumber is less than or equal to 4 and not 4 
    {
        cout << "Which story would you like to play? Enter the number of the story (1, 2, or 3) or type 4 to quit" << endl;
        cin >> storyNumber; //Take in user input of what story to play
        
        if (storyNumber == 1) //If storyNumber is 1
        {
            string scenarioOneNounInput = ""; //Create input variable that takes a noun
            cout << "Enter a noun: " << endl;
            cin >> scenarioOneNounInput; //Store input 
            
            cout << "Be careful not to vacuum the " << scenarioOneNounInput << " when you clean under your bed." << endl; //Print out noun in Madlib
            cout << endl;
        }
        
        else if (storyNumber == 2) //If storyNumber is 2
        {
            string scenarioTwoNameInput = ""; //Create input variable that takes a name
            string scenarioTwoOccupationInput = ""; //Create input variable that takes an occupation
            string scenarioTwoPlaceInput = ""; //Create input variable that takes a place
            
            cout << "Enter a name: " << endl;
            cin >> scenarioTwoNameInput; //Store name
            cout << "Enter an occupation: " << endl;
            cin >> scenarioTwoOccupationInput; //Store occupation
            cout << "Enter a place: " << endl;
            cin >> scenarioTwoPlaceInput; //Store place
            
            cout << scenarioTwoNameInput << " is a " << scenarioTwoOccupationInput << " who lives in " << scenarioTwoPlaceInput << "." << endl; //Print out name, occupation, and place in Madlib
            cout << endl;
        }
        
        else if (storyNumber == 3) //If storyNumber is 3
        {
            string scenarioThreePluralNounInput = ""; //Create input variable plural noun
            string scenarioThreeOccupationInput = ""; //Create input variable occupation
            string scenarioThreeAnimalInput = ""; //Create input variable animal
            string scenarioThreePlaceInput = ""; //Create input variable place
            
            cout << "Enter a plural noun: " << endl;
            cin >> scenarioThreePluralNounInput; //Store noun
            cout << "Enter an occupation: " << endl;
            cin >> scenarioThreeOccupationInput; //Store occupation
            cout << "Enter an animal: " << endl;
            cin >> scenarioThreeAnimalInput; //Store Animal
            cout << "Enter a place: " << endl;
            cin >> scenarioThreePlaceInput; //Store place
            
            cout << "In the book War of the " << scenarioThreePluralNounInput << ", the main character is an anonymous " << 
            scenarioThreeOccupationInput << " who records the arrival of the " << scenarioThreeAnimalInput << "s in " << scenarioThreePlaceInput << "." << endl; //Print out noun, occupation, animal, and place
            cout << endl;
        }
    
    }
    
    if (storyNumber == 4) //If storyNumber is 4
    {
        cout << "Good bye!" << endl; //Print "Good bye!"
    }
}

int main()
{
    //Test case 1
    //Run storyGenerator
    storyGenerator();
}