//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 8 - Problem 4

#include <iostream>
#include "Team.h"
using namespace std;

int main()
{
    //Test case 1
    //Expected output
    //The winner is: Seg Faultline
    Team team1("Seg Faultline");
    team1.readRoster("roster1.txt");
    Team team2("Team Maim");
    team2.readRoster("roster2.txt");
    string winner = game(team1, team2);
    cout << "The winner is: " << winner << endl;
    
    //Test case 2
    //Expected output
    //The winner is: draw
    Team team4("Thats so Ravenclaw");
    team4.readRoster("roster1.txt");
    Team team5("Planes on a Snake");
    team5.readRoster("roster1.txt");
    string winner1 = game(team4, team5);
    cout << "The winner is: " << winner1 << endl;
}