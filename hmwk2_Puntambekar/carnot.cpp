// CS1300 Fall 2019
// Author: Sidhant Puntambekar
// Recitation: 304 – Reddy
// Homework 2 - Problem #9

#include <iostream>
using namespace std;

double carnot(double TC, double TH) //This algorithm calculates the Carnot efficiency given a Tc and Th value
{
    double carnotEfficiency = 1-(TC/TH); //Formula for calculating Carnot efficiency
    //cout << "The carnot efficiency is " << carnotEfficiency << endl; //Output carnot efficiency
    return carnotEfficiency;
}

int main()
{
    //Test case 1
    //Arguments: TC = 12, TH = 24
    //Expected output
    // 0.5
    double testCase1 = carnot(12,24);
    cout << "The carnot efficiency is " << testCase1 << endl;
    
    //Test case 2
    //Arguments: TC = -300, TH = 100
    //Expected output
    // 4
    double testCase2 = carnot(-300,100);
    cout << "The carnot efficiency is " << testCase2 << endl;
}