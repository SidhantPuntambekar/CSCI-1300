// CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation 304 - Thanika Reddy
//Project 1 - Problem 2

#include <iostream>
#include <string>
using namespace std;

int countMatches(string inputString, string substring)
{
    int count = 0; //Define count variable to count occurences of substring in inputString
    if (inputString == "" || substring == "") //If inputString or substring are blank, then return -1
    {
        return -1;
    }
    else //If both inputString and substring contain strings
    {
        for (int i = 0; i <= inputString.length()-substring.length(); i++) //Loop through substrings in inputString.length-substring.length to make sure a smaller substring in inputString is not being compared to substring
        {
            if (inputString.substr(i,substring.length()) == substring) //If inputString substring from i to substring.length equals substring
            {
                count++; //Add one to count
            }
        }
        return count; //Return count
    }
}

int main()
{
    //Test case 1
    //Expected output
    //2
    cout << countMatches("mississippi", "ssi") << endl;
    
    //Test case 2
    //Expected output
    //-1
    cout << countMatches("","") << endl;
    
    //Test case 3
    //Expected output
    //1
    cout << countMatches("mississippi", "ipp") << endl;
    
    //Test case 4
    //Expected output
    //7
    cout << countMatches("aabaabaabaabaabaabaab", "aab") << endl;
}