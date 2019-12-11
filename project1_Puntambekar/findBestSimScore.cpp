// CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation 304 - Thanika Reddy
//Project 1 - Problem 5

#include <iostream>
#include <string>
using namespace std;

double findBestSimScore(string genome, string substring) //This algorithm finds the best sim score for a given genome and returns it as a double
{
    double string_length = substring.length(); //Define the string length in the similarity score formula as the substring length since that is what we are comparing to in the genome. 
    int hammingDistance = 0; //Set the hamming distance equal to zero
    double maxSimilarityScore = 0;
    
    if ((genome.length() < substring.length()) || (genome == "") || (substring == "")) //If statment to catch edge cases such as if the substring is longer than the genome or if either is an empty string
    {
        return 0.0;
    }
    for (int i = 0; i < genome.length() - substring.length()+1; i++) //Iterate through the length of genome - substring length and add 1 to it to prevent comparison from genome subtring length-1 to substring length
    {
        string genomeSub = genome.substr(i,substring.length()); //Create a variable called genome substring from i to substring.length()
        int hammingDistanceSubstring = 0; //Create a hamming distance variable and initialize it to zero
        for (int j = 0; j < substring.length(); j++) //Loop through the substring length and increment by 1
        {
            if (genomeSub[j] != substring[j]) //If the genomeSub at index j does not equal substring at index j
            {
                hammingDistanceSubstring += 1; //Increase hamming distance by 1
            }
        }
        double similarity_score = (string_length - hammingDistanceSubstring)/(string_length); //Calculate similarity score using given formula
        if (similarity_score > maxSimilarityScore) //Find the maxSimilarityScore using a max algorithm
        {
            maxSimilarityScore = similarity_score;
        }
    }
    return maxSimilarityScore; //return similarity score
}

int main()
{
    //Test case 1
    //Expected output
    //0.666667
    cout << findBestSimScore("ATACGC", "ACT") << endl;
    
    //Test case 2
    //Expected output
    //0.333333
    cout << findBestSimScore("ATACCAG", "AGG") << endl;
    
    //Test case 3
    //Expected output
    //0
    cout << findBestSimScore("AT", "GC") << endl;
}