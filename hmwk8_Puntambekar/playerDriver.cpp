//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 8 - Problem 2

#include <iostream>
#include "Player.h"
using namespace std;

int main()
{
    //Test case 1
    //Expected output
    /*
    0
    Stella
    13.1
    */
    Player stella;
    cout << stella.getName() << endl;
    cout << stella.getPoints() << endl;
    stella.setName("Stella");
    stella.setPoints(13.1);
    cout << stella.getName() << endl;
    cout << stella.getPoints() << endl;
    
    //Test case 2
    //Expected output
    /*
    Hector
    6.2
    */
    Player hector("Hector", 6.2);
    cout << hector.getName() << endl;
    cout << hector.getPoints() << endl;
}