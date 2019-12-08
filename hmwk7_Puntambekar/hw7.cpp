//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Homework 7 - Problem 7

#include <iostream>
using namespace std;

void printMenu()
{
    cout << "======Main Menu=====" << endl;
    cout << "1. Read books" << endl;
    cout << "2. Read ratings" << endl;
    cout << "3. Get rating" << endl;
    cout << "4. Find number of books user rated" << endl;
    cout << "5. Get average rating" << endl;
    cout << "6. Quit" << endl;
}

string toLowerCase(string stringName)
{
    for (int i = 0; i < stringName.length(); i++)
    {
        stringName[i] = tolower(stringName[i]);
    }
    return stringName;
}

int getRating(string username, string titleOfBook, User users[], Book books[], int numUsers, int numBooks)
{
    bool foundUser = false;
    bool foundBook = false;
    int userIndex = 0;
    int bookIndex = 0;
    
    for (int i = 0; i < numUsers; i++)
    {
        if (toLowerCase(users[i].getUsername()) == toLowerCase(username))
        {
            foundUser = true;
            userIndex = i;
        }
    }
    
    for (int j = 0; j < numBooks; j++)
    {
        if (toLowerCase(books[j].getTitle()) == toLowerCase(titleOfBook))
        {
            foundBook = true;
            bookIndex = j;
        }
    }
    
    if (foundBook && foundUser)
    {
        return users[userIndex].getRatingAt(bookIndex);
    }
    
    else
    {
        return -3;
    }
}

int getCountReadBooks(string username, User users[], int numUsers, int numBooks)
{
    int userCount = 0;
    int rating = 0;
    int indexOfUser = 0;
    int ratingCount = 0;
    
    if (numBooks == 0)
    {
        return -3;
    }
    
    for (int i = 0; i < numUsers; i++)
    {
        if (toLowerCase(users[i].getUsername()) == toLowerCase(username))
        {
            userCount++;
            indexOfUser = i;
        }
    }
    
    if (userCount == 0)
    {
        return -3;
    }
    
    if (numUsers > 0)
    {
        for (int j = 0; j < numBooks; j++)
        {
            rating = users[indexOfUser].getRatingAt(j);
            if (rating != 0)
            {
                ratingCount++;
            }
        }
        return ratingCount;
    }

    if (ratingCount == 0)
    {
        return 0;
    }
    
    return -3;
}

double calcAverageRating(User users[], Book books[], int numUsers, int numBooks, string titleOfBook)
{
    int indexOfBook = -3; 
    int sum = 0.0;
    double average = 0.0;
    int count = 0;

    if (numBooks == 0 || numUsers == 0)
    {
        return -3;
    }
    
    for (int i = 0; i < numBooks; i++)
    {
        if (toLowerCase(books[i].getTitle()) == toLowerCase(titleOfBook))
        {
            indexOfBook = i;
        }
        else
        {
            ;
        }
    }
    
    if (indexOfBook == -3)
    {
        return -3;
    }
    
    for (int j = 0; j < numUsers; j++)
    {
        double temp = users[j].getRatingAt(indexOfBook);
        if (temp != 0)
        {
            sum += temp;
            count++;  
        }
        else
        {
            ;
        }
    }
    
    if (count == 0)
    {
        return 0;
    }
    
    average = (double) sum/count; 
    return average;
}

void hw7()
{
    Book arrayOfBooks[50];
    User arrayOfUsers[100];
    int numOfBooks = 0;
    int numOfUsers = 0;
    int numBooks = 0;
    int numUsers = 0;
    
    string optionstring; //define option input string
    int option; //define option integer to be processed
    
    printMenu();
    getline(cin, optionstring); //Get lines from the file as a string
    option = stoi(optionstring); //Convert optionString to integer
    
    while (option != 6) 
    {
        if (option == 1)
        {
            string fileName; //Enter the books file name
            cout << "Enter a book file name: " << endl;
            getline(cin, fileName);
            
            //call readBook function and assign value to numBooks
            numBooks = readBooks(fileName, arrayOfBooks, numOfBooks, 50);
            
            
            // If the numBooks is more than 50
            if (numBooks >= 50)
            {
                cout << "Database is full. Some books may have not been added." << endl;
                numOfBooks = numBooks;
            }  
            
            //If a book was attempted to be added to full database            
            else if (numBooks == -2)
            {
                cout << "Database is already full. No books were added." << endl;
            }
            
            //If the file is empty
            else if (numBooks == -1)
            {
                cout << "No books saved to the database." << endl;
            }
        
            //If the edge cases do not give errors
            else 
            {
                cout << "Total books in the database: " << numBooks << endl;
                numOfBooks = numBooks;
            } 
        }
        
        else if (option == 2)
        {
            string fileName; //Define user file name
            cout << "Enter a user file name: " << endl;
            getline(cin, fileName);
            
            //Call readRatings function
            numUsers = readRatings(fileName, arrayOfUsers, numOfUsers, 100, 50);
            
            
            // If the number of users is greater than 100
            if (numUsers >= 100)
            {
                cout << "Database is full. Some users may have not been added." ;
                numOfUsers = numUsers;
            }
            
            //If the user file is not empty or null
            else if (numUsers == -1)
            {
                cout << "No users saved to the database." << endl;
            }
        
            //If a user attempted to be added to a full database            
            else if (numUsers == -2)
            {
                cout << "Database is already full. No users were added." << endl;
            }
        
            //If no edge cases were caught
            else 
            {
                cout << "Total users in the database: " << numUsers << endl;
                numOfUsers = numUsers;
            } 
        }
        
        else if (option == 3)
        {
            string userName; //Let user input username
            cout << "Enter a user name: " << endl;
            getline(cin, userName);
            
            string bookTitle; //Enter a book title
            cout << "Enter a book title: " << endl;
            getline(cin, bookTitle);
            
            //Run the getRating function on user inputs and arrayOfUsers
            int rating = getRating(userName, bookTitle, arrayOfUsers, arrayOfBooks, numOfUsers, numOfBooks);
            
            if (rating == -3) //If the rating is -3
            {
                cout << userName << " or " << bookTitle << " does not exist." << endl;
            }
            
            else if(rating == 0) //If the rating is 0
            {
                cout << userName << " has not rated " << bookTitle << endl;
            }
            
            else //In all other cases
            {
                cout << userName << " rated " << bookTitle << " with " << rating << endl;
            }
        }
        
        else if (option == 4) //If the user selects option 4
        {
            string userName; //Input a username
            cout << "Enter a user name: " << endl;
            getline(cin, userName);
            
            //Run the getCountReadBooks on username and arrayOfUsers
            int ratingCount = getCountReadBooks(userName, arrayOfUsers, numOfUsers, numOfBooks);
            
            if (ratingCount == -3) //If ratingCount is -3
            {
                cout << userName << " does not exist." << endl;
            }
            
            else if (ratingCount == 0) //If rating count is zero
            {
                cout << userName << " has not rated any books." << endl;
            }
            
            else //In all other cases
            {
                cout << userName << " rated " << ratingCount << " books." << endl;
            }
        }
        
        else if (option == 5) //If the user selects option 5
        {
            string bookTitle; //User inputs a book title
            cout << "Enter a book title: " << endl;
            getline(cin, bookTitle);
            
            //Calculate average rating of book
            double average = calcAverageRating(arrayOfUsers, arrayOfBooks, numOfUsers, numOfBooks, bookTitle);
            
            if (average == -3) //If the average is -3
            {
                cout << bookTitle << " does not exist." << endl;
            }
            
            else //In all other cases
            {
                cout << "The average rating for " << bookTitle << " is " << average << endl;
            }
        }
        
        else //Invalid input error catch
        {
            cout << "Invalid input." << endl;
        }
        
        printMenu(); //Print the menu again
        getline(cin, optionstring); //The option with be inputed as a string
        option = stoi(optionstring); //Call stoi to convert to int
    }
    
    if (option == 6) //Exit the program
    {
        cout << "Good bye!" << endl;
    }
}

int main()
{
    hw7();
}