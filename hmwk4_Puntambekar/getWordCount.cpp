//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 4 - Problem 5

#include <iostream>
#include <string>
using namespace std;

int getWordCount(string sentence) //This algorithm counts the number of words in one sentence
{
    int count = 0; //Declare a count variable to keep track of spaces which denote word endings
    for (int i = 0; i <= sentence.length(); i++) //Loop through the length of the sentence to find spaces
    {
        if (sentence[i] == ' ')
        {
            count++; //If a space is found, add one to count
        }
    }
    if (sentence == "") //If the sentence is an empty string, set count = 0
    {
        count = 0;
    }
    else //If the sentence is one word, set count to 1
    {
        count = count + 1;
    }
    return count; //Return count
}

int main()
{
    //Test case 1
    //Expected output 
    //1
    cout << getWordCount("Go") << endl;
    
    //Test case 2
    //Expected output 
    //5
    cout << getWordCount("Colorless green ideas dream furiously") << endl;
    
    //Test case 3
    //Expected output
    //2
    cout << getWordCount("I went") << endl;
}
