//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 6 - Problem 2

#include <iostream>
#include "planet.h"
#include "planet.cpp"
using namespace std;

int main()
{
    //Test case 1
    //Expected output
    //Bird World
    //4321
    //3.37941e+11
    Planet planets[5];
    planets[0] = Planet("On A Cob Planet",1234);
    planets[1] = Planet("Bird World",4321);
    int idx = maxRadius(planets, 2);
    cout << planets[idx].getName() << endl;
    cout << planets[idx].getRadius() << endl;
    cout << planets[idx].getVolume() << endl;
    
    //Test case 2
    //Expected output
    //Nebraska
    //13.3
    //9854.7
    Planet planets1[3];
    planets1[0] = Planet("Nebraska",13.3);
    planets1[1] = Planet("Flarbellon-7",8.6);
    planets1[2] = Planet("Parblesnops",6.8);
    int idx1 = maxRadius(planets1, 3);
    cout << planets1[idx1].getName() << endl;
    cout << planets1[idx1].getRadius() << endl;
    cout << planets1[idx1].getVolume() << endl;
}