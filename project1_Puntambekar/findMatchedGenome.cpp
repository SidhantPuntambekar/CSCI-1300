// CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation 304 - Thanika Reddy
//Project 1 - Problem 6

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

void findMatchedGenome(string genome1, string genome2, string genome3, string sequence) //This algorithm takes in three genomes and a substring and compares their similarity score to find out which one is the best
{
    if (genome1 == "" || genome2 == "" || genome3 == "" || sequence == "") //If any of the input strings are empty, throw an error
    {
        cout << "Genomes or sequence is empty." << endl;
    }
    else if ((genome1.length() != genome2.length()) || (genome2.length() != genome3.length()) || (genome3.length() != genome1.length())) //If none of the genomes are equal in length, throw an error
    {
        cout <<  "Lengths of genomes are different." << endl;
    }
    else //In all other cases
    {
        double similarityScoreGenome1 = findBestSimScore(genome1, sequence); //Create three variables for the genome where we find the similarity score with the genome and substring
        double similarityScoreGenome2 = findBestSimScore(genome2, sequence);
        double similarityScoreGenome3 = findBestSimScore(genome3,sequence);
        
        if (similarityScoreGenome1 > similarityScoreGenome2 && similarityScoreGenome1 > similarityScoreGenome3) //If genome 1 has the highest similarity score, print that genome 1 is the best match
        {
            cout << "Genome 1 is the best match." << endl;
        }
        else if (similarityScoreGenome2 > similarityScoreGenome1 && similarityScoreGenome2 > similarityScoreGenome3) //If genome 2 has the highest similarity score, print that genome 2 is the best match
        {
            cout << "Genome 2 is the best match." << endl;
        }
        else if (similarityScoreGenome3 > similarityScoreGenome1 && similarityScoreGenome3 > similarityScoreGenome2) //If genome 3 has the highest similarity score, print that genome 3 is the best match
        {
            cout << "Genome 3 is the best match." << endl;
        }
        else if (similarityScoreGenome1 == similarityScoreGenome2 && similarityScoreGenome1 != similarityScoreGenome3) //If two of the genomes have equal scores, print out the two genomes are the best match
        {
            cout << "Genome 1 is the best match." << endl;
            cout << "Genome 2 is the best match." << endl;
        }
        else if (similarityScoreGenome2 == similarityScoreGenome3 && similarityScoreGenome2 != similarityScoreGenome1) //If two of the genomes have equal scores, print out the two genomes are the best match
        {
            cout << "Genome 1 is the best match." << endl;
            cout << "Genome 3 is the best match." << endl;
        }
        else if (similarityScoreGenome3 == similarityScoreGenome1 && similarityScoreGenome3 != similarityScoreGenome2) //If two of the genomes have equal scores, print out the two genomes are the best match
        {
            cout << "Genome 2 is the best match." << endl;
            cout << "Genome 3 is the best match." << endl;
        }
        else if (similarityScoreGenome1 == similarityScoreGenome2 && similarityScoreGenome2 == similarityScoreGenome3 && similarityScoreGenome1 == similarityScoreGenome3) //If all three genomes have the same similarity score, then print out that all three are the best match
        {
            cout << "Genome 1 is the best match." << endl;
            cout << "Genome 2 is the best match." << endl;
            cout << "Genome 3 is the best match." << endl;
        }
    }
}

int main()
{
    //Test case 1
    //Expected output
    //Genome 2 is the best match.
    findMatchedGenome("AATGTTTCAC", "GACCGACTAA", "AAGGTGCTCC", "TACTA");
    
    //Test case 2
    //Expected output
    //Genome 1 is the best match.
    //Genome 2 is the best match.
    findMatchedGenome("AACT", "AACT", "AATG", "AACT");
    
    //Test case 3
    //Expected output
    //Genomes or sequence is empty.
    findMatchedGenome("ACTG", "AGTC", "AAAA", "");
}
