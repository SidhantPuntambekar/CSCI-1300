//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 7 - Problem 1

#include <iostream>
#include "user.h"
using namespace std;

int main()
{
    //Test case 1
    //Expected output
    //set/get setRatingAt(40,3) [numRating=45]
    // Setting rating at 40 to 3
    // setRatingAt(40,3) returned: true
    // getRatingAt(40) returned: 3
    User u1 = User();
    int nRating = 45;
    u1.setNumRatings(nRating);
    int rating = 3;
    int idx = 40;
    cout << "set/get setRatingAt(" << idx << "," << rating << ") [numRating=" << nRating  << "]" << endl;
    cout << "Setting rating at " << idx << " to " << rating << endl;
    string ratingset = u1.setRatingAt(idx,rating) ? "true": "false";
    cout << "setRatingAt(" << idx << "," << rating << ") returned: " << ratingset << endl;
    cout << "getRatingAt(" << idx << ") returned: " << u1.getRatingAt(idx) << endl;
    
    //Test case 2
    //Expected output
    //getUsername() returned: Hidden Test
    // getNumRatings() returned: 10
    // All ratings are updated: success
    // All ratings are initialized: success
    int testRate[] = {3,1,4,2,1,3,5,0,3,4};
    User u2 = User("Hidden Test", testRate, 10);
    
    cout << "getUsername() returned: " << u2.getUsername() << endl;
    cout << "getNumRatings() returned: " << u2.getNumRatings() << endl;
    
    bool ratingValues = true;
    bool initialized = true;
    for(int i = 0; i < 10; i++){
         if(testRate[i] != u2.getRatingAt(i)){
              ratingValues = false;
         }
    }
    
    string ratingResult = ratingValues ? "success": "not updated in parameterized constructor";
    cout << "All ratings are updated: " << ratingResult << endl;
    
    
    for(int i = 10; i < 50; i++){
         if(u2.getRatingAt(i) != 0){
              initialized = false;
         }
    }
    string result = initialized ? "success": "not initialized to 0";
    cout << "All ratings are initialized: " << result << endl;
}