// CS1300 Fall 2019
// Author: Sidhant Puntambekar
// Recitation: 304 – Reddy
// Homework 2 - Problem #8

#include <iostream>
using namespace std;

int population(int initialPopulation) //This algorithm calculates the population of the United States in one year given an initial population
{
    long births = (60*60*24*365)/(8); //Number of births in US in one year
    int deaths = (60*60*24*365)/(12); //Number of deaths in US in one year
    int immigrants = (60*60*24*365)/(27); //Number of immigrants in US in one year
    
    int newPopulation = initialPopulation + births + immigrants - deaths; //Calculate the new population
    
    //cout << "The new population of the United States in one year is: " << newPopulation << endl; //Output new population
    return newPopulation;
}

int main()
{
    //Test case 1
    //Arguments: population = 1000000
    //Expected result
    //3482000
    int testCase1 = population(1000000);
    cout << "The new population of the United States in one year is: " << testCase1 << endl;
    
    //Test case 2
    //Arguments: population = 2000000
    //Expected result
    //4482000
    int testCase2 = population(2000000);
    cout << "The new population of the United States in one year is: " << testCase2 << endl;
}