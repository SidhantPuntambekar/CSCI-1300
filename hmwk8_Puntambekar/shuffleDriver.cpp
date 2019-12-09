//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 8 - Problem 1

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Test case 1
    //Expected output
    //2 1 4 3 6 5 8 9 10 
    vector<int> v1{1,3,5,9};
    vector<int> v2{2,4,6,8,10};
    vector<int> v3 = shuffle(v1,v2);
    for (int i = 0; i < v3.size(); i++) 
    {
        cout << v3[i] << " ";
    }
    cout << endl;
    
    //Test case 2
    //Expected output
    //1 5 3 -7 
    vector<int> v4{1,3};
    vector<int> v5{5,-7};
    vector<int> v6 = shuffle(v4,v5);
    for (int i=0; i < v6.size(); i++) 
    {
        cout << v6[i] << " ";
    }
    cout << endl;
    
    
    //Test case 3
    //Expected output
    //(empty vector)
    vector<int> v7;
    vector<int> v8;
    vector<int> v9 = shuffle(v7,v8);
    for (int i=0; i < v9.size(); i++) 
    {
        cout << v9[i] << " ";
    }
}