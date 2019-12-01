// CS1300 Fall 2019
// Author: Sidhant Puntambekar
// Recitation: 304 – Reddy
// Homework 2 - Problem #10

#include <iostream>
using namespace std;

int calculateSalary(int rainyDays, int coldDays, int sunnyDays) //This algorithms calculates the workers salary based on the number of rainy, cold, and sunny days
{
    int salary = ((rainyDays*5)+(coldDays*4)+(sunnyDays*8))*10; //Caculates salary
    //cout << "The salary for this month($): " << salary << endl;
    return salary; //Returns salary of the worker in one month
}

int main()
{
    //Test case 1
    //Arguments: rainyDays = 5, coldDays = 8, sunnyDays = 19
    //Expected output
    // 2090
    int testCase1 = calculateSalary(5,8,19);
    cout << "The salary for this month($): " << testCase1 << endl;
    
    //Test case 2
    //Arguments: rainyDays = 8, coldDays = 10, sunnyDays = 22
    //Expected output
    // 2560
    int testCase2 = calculateSalary(8,10,22);
    cout << "The salary for this month($): " << testCase2 << endl;
}