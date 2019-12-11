// CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation 304 - Thanika Reddy
//Project 1 - Problem 7

#include <iostream>
#include <string>
using namespace std;

// Show menu function
string showMenu()
{
    cout << "Select a numerical option:" << endl;
    cout << "=== menu ===" << endl;
    cout << "1. Find similarity score" << endl;
    cout << "2. Find the best similarity score" << endl;
    cout << "3. Analyze the genome sequences" << endl;
    cout << "4. Quit";
    return "";
}

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
            cout << "Genome 2 is the best match." << endl;
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

void analyzeDNA() //This algorithm analyzes DNA sequences by finding the sim score, finding the best sim score, and finding the best match genome
{
    int numericalOption = 0; //Create a variable to keep track of the user's input
    
    while(numericalOption != 4) //While the user doesn't select 4
    {
        cout << showMenu() << endl; //Output the menu to the user
        cin >> numericalOption; //Store the user's input in the numericalOption variable
        
        if (numericalOption > 4 || numericalOption < 1) //If the numericalOption is outside the range of 1 to 4, create an error
        {
            cout << "Invalid option." << endl;
        }
        
        if(numericalOption == 1) //If the user selects 1
        {
            string sequence1 = ""; //Create a sequence 1 string
            string sequence2 = ""; //Create a sequence 2 string
            
            cout << "Enter sequence 1: " << endl; //Prompt the user to enter sequence 1
            cin >> sequence1; //Store input in sequence 1
            
            cout << "Enter sequence 2: " << endl; //Prompt the user to enter sequence 2
            cin >> sequence2; //Store input in sequence 2
            
            cout << "Similarity score: " << calcSimScore(sequence1,sequence2) << endl; //Output the similarity score
        }
        
        if (numericalOption == 2) //If the user selects 2
        {
            string genome = ""; //Create a genome string
            string sequence = ""; //Create a sequence string
            
            cout << "Enter genome: " << endl; //Prompt the user to enter a genome
            cin >> genome; //Store the input in genome
            
            cout << "Enter sequence: " << endl; //Prompt the user to enter a sequence
            cin >> sequence; //Store the input in sequence
            
            cout << "Best similarity score: " << findBestSimScore(genome,sequence) << endl; //Calculate the best similarity score
        }
        
        if (numericalOption == 3) //If the user selects 3
        {
            string genome1 = ""; //Create genome 1 string
            string genome2 = ""; //Create genome 2 string
            string genome3 = ""; //Create genome 3 string
            string sequence = ""; //Create sequence string
             
            cout << "Enter genome 1: " << endl; //Prompt the user to enter a genome
            cin >> genome1; //Store the input in genome1
            
            cout << "Enter genome 2: " << endl; //Prompt the user to enter a genome
            cin >> genome2; //Store the input in genome2
            
            cout << "Enter genome 3: " << endl; //Prompt the user to enter a genome
            cin >> genome3; //Store the input in genome3
            
            cout << "Enter sequence: " << endl; //Prompt the user to enter a sequence
            cin >> sequence; //Store the input in sequence
            
            findMatchedGenome(genome1,genome2,genome3,sequence); //Find matched genome
        }
        
        if(numericalOption == 4) //If the user selects 4, print Good bye!
        {
            cout << "Good bye!" << endl;
        }
    }
}

int main()
{
    analyzeDNA(); //Run analyzeDNA()
}