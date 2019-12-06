//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 6 - Problem 1

#include <iostream>
#include "planet.h"
#include "planet.cpp"
#include <string>
using namespace std;

int main()
{
    //Test case 1
    //Expected output
    //Planet Name: Nebraska
    //Planet Radius: 866.23
    //Planet Volume: 2.72263e+09
    string name = "Nebraska";
    double radius = 866.23;
    Planet p5;
    p5 = Planet(name,radius);
    cout << "Planet Name: " << p5.getName() << endl;
    cout << "Planet Radius: " << p5.getRadius() << endl;
    cout << "Planet Volume: " << p5.getVolume() << endl;  
    
    //Test case 2
    //Expected output
    //Planet Name: Ceres
    //Planet Radius: 4543.3
    //Planet Volume: 3.92828e+11
    string name1 = "Ceres";
    double radius1 = 4543.3;
    Planet p1;
    p1 = Planet(name1,radius1);
    cout << "Planet Name: " << p1.getName() << endl;
    cout << "Planet Radius: " << p1.getRadius() << endl;
    cout << "Planet Volume: " << p1.getVolume() << endl;  
    
}