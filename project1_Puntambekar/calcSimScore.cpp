// CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation 304 - Thanika Reddy
//Project 1 - Problem 4

#include <iostream>
#include <string>
using namespace std;

double calcSimScore(string sequence1, string sequence2) //This algorithm calcualtes the similarity score given two strings
{
    if ((sequence1.length() != sequence2.length()) || (sequence1 == "" && sequence2 == "")) //If the lengths of the two strings is not equal or one of them is empty, return 0.0
    {
        return 0.0;
    }
    else if (sequence1.length() == sequence2.length()) //Else if the lengths are equal
    { 
        
        double string_length = sequence1.length(); //String length is the sequence length 1
        int hammingDistance = 0; //Initialize the hammingDistance to zero
        
        for (int i = 0; i < sequence1.length(); i++) //Loop through sequence 1's length 
        {
            if (sequence1[i] != sequence2[i]) //If the charactes in sequence 1 do not match sequence 2's function
            {
                hammingDistance += 1; //Increase the hamming distance by 1
            }
        }
        double similarity_score = (string_length - hammingDistance)/string_length; //Calculate similarity score based on given formula
        return similarity_score; //Return the similarity score
    }
}

int main()
{
    //Test case 1
    //Expected output
    //0.75
    cout << calcSimScore("ATGC","ATGA") << endl;
    
    //Test case 2
    //Expected output
    //1
    cout << calcSimScore("CCDCC", "CCDCC") << endl;
    
    //Test case 3
    //Expected output
    //0
    cout << calcSimScore("ATG", "GAT") << endl;
    
    //Test case 4
    //Expected output
    //0
    cout << calcSimScore("ACCDT", "ACT") << endl;
}