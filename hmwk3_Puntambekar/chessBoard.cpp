//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 3 - Problem 3s

#include <iostream>
using namespace std;

void chessBoard(char boardLetter, int boardNumber) //This function/algorithm determines if a square on a chess board is white or black
{
    if (boardNumber < 1 || boardNumber > 8) //If boardNumber has a value of anything less than 1 or greater than 8, print the line and exit the function
    {
         cout << "Chessboard squares can only have letters between a-h and numbers between 1-8.";
    }
    
    else //In all other cases
    {
        if (boardLetter == 'a' || boardLetter == 'c' || boardLetter == 'e' || boardLetter == 'g') //If the boardLetter is 'a', 'c', 'e', or 'g', execute the following
        {
            if (boardNumber % 2 == 1 && boardNumber <= 8) //If the boardNumber is not divisble by two and less than 8, print black
            {
                cout << "black" << endl;
            }
            else //In all other cases print white 
            {
                cout << "white" << endl;
            }
        }
        
        else if (boardLetter == 'b' || boardLetter == 'd' || boardLetter == 'f' || boardLetter == 'h') //If boardLetter is a 'b', 'd', 'f', or 'h', execute the following
        {
            if (boardNumber % 2 == 0 && boardNumber <= 8) //If boardNumber is divisble by two and less than 8, print black
            {
                cout << "black" << endl;
            }
            else //In all other cases print white
            {
                cout << "white" << endl;
            }
        }
        
        else //In any other cases, print error message and exit function
        {
            cout << "Chessboard squares can only have letters between a-h and numbers between 1-8.";
        }
    }
}

int main()
{
    //Test case 1
    //Expected Output
    //black
    chessBoard('a',1);
    
    //Test case 2
    //Expeceted Output
    //white
    chessBoard('c',4);
    
    //Test case 3
    //Expected Output
    //black
    chessBoard('h',8);
    
    //Test case 4
    //Expected output
    //“ Chessboard squares can only have letters between a-hand numbers between 1-8. ”
    chessBoard('z', 59);
}