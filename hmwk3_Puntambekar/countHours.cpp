//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 3 - Problem 5

#include <iostream>
using namespace std;

int countHours(int month) //This function returns the number of hours in each month
{
    int n = month; //Convert month into a new integer variable n
    
   switch (n) //Switch statement cycles through each possible case based on user input
   {
    case 1: //January
        return 744;
    case 2: //February
        return 672;
    case 3: //March
        return 744;
    case 4: //April
        return 720;
    case 5: //May
        return 744;
    case 6: //June
        return 720;
    case 7: //July
        return 744;
    case 8: //August
        return 744;
    case 9: //September
        return 720;
    case 10: //October
        return 744;
    case 11: //November
        return 720;
    case 12: //December
        return 744;
   }
}

int main()
{
    //Test case 1
    //Expected output
    //744
    cout<< countHours(5) << endl;
    
    //Test case 2
    //Expected output
    //744
    cout << countHours(12) << endl;
    
    //Test case 3
    //Expected output
    //672
    cout << countHours(2) << endl;
}