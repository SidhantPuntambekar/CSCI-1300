// CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation 304 - Thanika Reddy
//Project 1 - Problem 3

#include <iostream>
using namespace std;

// showMenu function for problem 3 in proj 1
string printMenu()
{
	cout<<"Select a numerical option:"<<endl;
	cout<<"=== menu ==="<<endl;
	cout<<"1. Fox"<<endl;
	cout<<"2. Bunny"<<endl;
	cout<<"3. Sloth"<<endl;
	cout<<"4. Quit";
	return "";
}

void weightedAverage() //This algorithm calculates a hire score based on various parameters for candidates in the police force
{
    int animal = 0; //Create an integer variable called animal which will keep track of the user's selections
    double hireScore = 0; //Create a double variable called hire score and initialize it to zero
    while(animal != 4 && animal <= 4) //While the user doesn't choose a value that is 4 and is less than 4 (if it is greater than 4 then don't execute)
    {
        cout << printMenu() << endl; //Print the menu to console 
        cin >> animal; //Store the user's input to the animal variable
        
        if (animal == 1) //If the user selects 1
        {
            double agility = 0; //Create a variable called agility
            double strength = 0; //Create a variable called strength
            
            cout << "Enter agility: " << endl; //Prompt the user to enter agility
            cin >> agility; //Store user's input to the agility variable
            cout << "Enter strength: " << endl; //Prompt the user to enter a strength
            cin >> strength; //Store user's input to the strength variable
            
            hireScore = 1.8*(agility) + 2.16*(strength); //Calculate the hiring score using given parameters 
            cout <<"Hire Score: "<< hireScore << endl; //Output hiring score
        }
        
        if (animal == 2) //If the user selects 2
        {
            double agility = 0; //Create agility variable
            double speed = 0; //Create speed variable
            
            cout << "Enter agility: " << endl; //Prompt the user to enter an agility
            cin >> agility; //Store user's input to agility variable
            cout << "Enter speed: " << endl; //Prompt the user to enter a speed
            cin >> speed; //Store the user's input to the speed variable
            
            hireScore = 1.8*(agility) + 3.24*(speed); //Calculate hiring score using given parameters
            cout <<"Hire Score: "<< hireScore << endl; //Output hiring score
        }
        
        if (animal == 3) //If the user selects 3
        {
            double speed = 0; //Create a variable called speed
            double strength = 0; //Create a variable called strength
            
            cout << "Enter strength: " << endl; //Prompt the user to enter a strength
            cin >> strength; //Store the user input in strength
            cout << "Enter speed: " << endl; //Prompt the user to enter a speed
            cin >> speed; //Store the user input in speed
            
            hireScore = 3.24*(speed) + 2.16*(strength); //Calculate hire score using given parameters
            cout <<"Hire Score: "<< hireScore << endl; //Output hire score
        }
        
        if (animal == 4) //If animal is 4
        {
            cout << ""<< endl; //Quit the program
        }
    }
}

int main()
{
    weightedAverage(); //Execute weighted average
}