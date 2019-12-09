//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 8 - Problem 3 & 4

#include <iostream>
#include "Team.h"
#include <fstream>

int main()
{
    //Test case 1
    //Expected output
    /*
    Seg Faultline
    5
    O'Flaherty 5.5
    Ioana Fleming 6.1
    Behera 8
    Sankaralingam 1.7
    */
    Team team1("Seg Faultline");
    cout << team1.getTeamName() << endl;
    team1.readRoster("roster1.txt");
    int n1 = team1.getNumPlayers();
    cout << n1 << endl;
    for (int i = 0; i < n1; i++) 
    {
        cout << team1.getPlayerName(i) << " ";
        cout << team1.getPlayerPoints(i) << endl;
    }
    
    //Test case 2
    //Expected output
    /*
    Thats so Ravenclaw
    10
    O'Flaherty 5.5
    Ioana Fleming 6.1
    Behera 8
    Ku 4.9
    Sankaralingam 1.7
    Reddy 9.1
    Palavalli 2.8
    Naidu 5.6
    Ladd 8
    */
    Team team2;
    team2.setTeamName("Thats so Ravenclaw");
    cout << team2.getTeamName() << endl;
    team2.readRoster("roster1.txt");
    team2.readRoster("roster2.txt");
    int n2 = team2.getNumPlayers();
    cout << n2 << endl;
    for (int i = 0; i < n2; i++) 
    {
        cout << team2.getPlayerName(i) << " ";
        cout << team2.getPlayerPoints(i) << endl;
    }
}