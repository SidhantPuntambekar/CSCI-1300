//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 8 - Problem 1

#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int> vector1, vector<int> vector2) //This algorithm takes in two vectors of integers and shuffles them 
{
    vector<int> returnVector; //Declare the empty vector
    if (vector1.size() == 0 && vector2.size() == 0) //If vector1 size and vector2 size are zero, then return the empty vector
    {
        return returnVector; 
    }
    else //In all other cases
    {
        if (vector1.size() > vector2.size()) //If vector1 is bigger than vector 2
        {
            vector<int> returnVectorSize1; //Declare a vector to store vector1 and vector2 shuffled
            for (int i = 0; i < vector2.size(); i++) //Loop through vector 2 size
            {
                returnVectorSize1.push_back(vector1.at(i)); //Add vector1 at i to returnVectorSize1
                returnVectorSize1.push_back(vector2.at(i)); //Add vector2 at i to returnVectorSize1
            }
            for (int j = vector2.size(); j < vector1.size(); j++) //Append the rest of the contents of vector 1 to returnVectorSize1
            {
                returnVectorSize1.push_back(vector1.at(j));
            }
            return returnVectorSize1; //Return returnVectorSize1
        }
        
        else if (vector2.size() > vector1.size()) //If vector2 is bigger than vector1
        {
            vector<int> returnVectorSize2; //Declare a vector to store vector 1 and vector 2 shuffled
            for (int i = 0; i < vector1.size(); i++) //Loop through vector 1 size
            {
                returnVectorSize2.push_back(vector2.at(i)); //Add vector2 at i to returnVectorSize2
                returnVectorSize2.push_back(vector1.at(i)); //Add vector1 at i to returnVectorSize2
            }
            for (int j = vector1.size(); j < vector2.size(); j++) //Append the rest of the contents of vector 2 to returnVectorSize2
            {
                returnVectorSize2.push_back(vector2.at(j));
            }
            return returnVectorSize2; //Return returnVectorSize2
        }
        
        else //If both vectors are equal in size
        {
            vector<int> returnVectorSize3; //Declare a new vector to store shuffled vector1 and vector2
            for (int i = 0; i < vector1.size(); i++) // Loop through first argument size
            {
                returnVectorSize3.push_back(vector1.at(i)); //Add vector1 at i  to returnVectorSize3
                returnVectorSize3.push_back(vector2.at(i)); //Add vector2 at i to returnVectorSize3
            }
            return returnVectorSize3; //Return returnVectorSize3
        }
    }
}