//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Project 2 - Problem 3 & 4 Code Runner

#include <iostream>
#include "Library.h"
#include "user.h"
#include "book.h"
using namespace std;

int main()
{
    // //Test Case readBooks //WORKS
    
    // make library object
    Library myLibrary;
    // call readBooks
    int rv = myLibrary.readBooks("fileName.txt");
    // print values
    cout << "rv = " << rv << endl;
    cout << "numBooks = ";
    cout << myLibrary.getNumBooks() << endl;
    // print books
    myLibrary.printAllBooks();
    cout << endl;
    
    // make library object
    Library myLibrary100;
    // call readBooks and check return values
    int rv100 = myLibrary100.readBooks("badFile.txt");
    cout << "rv1 = " << rv100 << endl;
    cout << endl;
    
    // //Test Case printAllBooks
    myLibrary.printAllBooks();
    cout << endl;
    
    // //Test Case printBooksByAuthor //WORKS
    
    // make library obj
    Library lib;
    // read book file
    lib.readBooks("bookTestCasePrintBooksByAuthor.txt");
    // call printBooksByAuthor
    string author = "AuthorA";
    lib.printBooksByAuthor(author);
    cout << endl;
    
    // //Test Case readRatings //WORKS
    
    // make library obj
    Library lib1;
    // read book file
    lib1.readBooks("bookTestCaseReadRatings.txt");
    // call readRatings and check return values
    int rv1 = lib1.readRatings("ratingTestCaseReadRatings.txt");
    cout << "rv1 = ";
    cout << rv1 << endl;
    // check value of getNumUsers
    cout << "numUsers = ";
    cout << lib1.getNumUsers() << endl;
    // print user’s ratings
    string name = "Ninja";
    cout << lib1.getRating(name, "book1") << endl;
    cout << lib1.getRating(name, "book2") << endl;
    cout << lib1.getRating(name, "book3") << endl;
    cout << lib1.getRating(name, "book4") << endl;
    cout << lib1.getRating(name, "book5") << endl;
    cout << endl;
    
    // //Test case getRating //WORKS
    
    //Create a new Library
    Library myLibrary1;
    //add books to Library
    myLibrary1.readBooks("bookTestCaseGetRating.txt");
    //add users to Library
    myLibrary1.readRatings("ratingTestCaseGetRating.txt");
    cout << myLibrary1.getRating("User1", "Title2") << endl;
    cout << endl;
    
    // //Test case getCountReadBooks //WORKS
    
    //Create a new Library
    Library myLibrary2;
    //add books to Library
    myLibrary2.readBooks("bookTestCaseGetCountReadBooks.txt");
    //add users
    myLibrary2.readRatings("ratingTestCaseGetCountReadBooks.txt");
    // viewRatings for User2
    cout << myLibrary2.getCountReadBooks("User2");
    
    // //Test case viewRating  //WORKS
    
    Library myLibrary3;
    //add books to Library
    myLibrary3.readBooks("bookTestCaseViewRating.txt");
    //add users
    myLibrary3.readRatings("ratingTestCaseViewRating.txt");
    myLibrary3.viewRatings("User1", 2);
    
    // //Test case calcAvgRating //WORKS
    
    //Create a new Library
    Library myLibrary4;
    //add books to Library
    myLibrary4.readBooks("bookTestCaseCalcAvgRating.txt");
    //add users
    myLibrary4.readRatings("ratingTestCaseCalcAvgRating.txt");
    // calcAvgRating for Title2
    cout << myLibrary4.calcAvgRating("title2");
        
    //Test case calcAvgRatingByAuthor //Works
    
    //Create a new Library
    Library myLibrary7;
    //add books to Library
    myLibrary7.readBooks("bookTestCaseCalcAvgRatingByAuthor.txt");
    //add users
    myLibrary7.readRatings("ratingTestCaseCalcAvgRatingByAuthor.txt");
    // calcAvgRatingByAuthor for Author1
    cout << myLibrary7.calcAvgRatingByAuthor("author1");
    
    // //Test case addUser //WORKS
    
    //Create a new Library
    Library myLibrary5;
    myLibrary5.readRatings("ratingTestCaseAddUser.txt");
    // checking the user count
    cout << "numUsers = " << myLibrary5.getNumUsers() << endl;
    //add users
    cout << myLibrary5.addUser("User4") << endl;
    // checking the user count
    cout << "numUsers = " << myLibrary5.getNumUsers() << endl;
    
    //Test case checkOutBooks //Works
    
    //Create a new Library
    Library myLib6;
    myLib6.readBooks("bookTestCaseCheckOutBooks.txt");
    myLib6.readRatings("ratingTestCaseCheckOutBooks.txt");
    
    int oldRating = myLib6.getRating("User2", "Title1");
    int rv101 = myLib6.checkOutBook("User2", "Title1", 2);
    int newRating = myLib6.getRating("User2", "Title1");
    cout << "rv = " << rv101 << endl;
    cout << "oldRating = " << oldRating << endl;
    cout << "newRating = " << newRating << endl;
    
    //Test Case getRecommendations //WORKS
    
    Library myLib;
    myLib.readBooks("bookFile.txt");
    myLib.readRatings("ratingFile.txt");
    myLib.getRecommendations("User5");
    myLib.getRecommendations("User4");
}