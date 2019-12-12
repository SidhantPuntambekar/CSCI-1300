//CS1300 Fall 2019
//Author: Sidhant Puntambekar
//Recitation: 304 - Reddy
//Project 2 - Problem 5 & 6 Code Runner

#include <iostream>
using namespace std;

void printMenu() //Print the menu for the library
{
    cout << "Select a numerical option:" << endl;
    cout << "======Main Menu=====" << endl;
    cout << "1. Read books" << endl;
    cout << "2. Read ratings" << endl;
    cout << "3. Print all books" << endl;
    cout << "4. Print books by author" << endl;
    cout << "5. Get rating" << endl;
    cout << "6. Find number of books user rated" << endl;
    cout << "7. View ratings" << endl;
    cout << "8. Get average rating" << endl;
    cout << "9. Get average rating by author" << endl;
    cout << "10. Add a user" << endl;
    cout << "11. Checkout a book" << endl;
    cout << "12. Get recommendations" << endl;
    cout << "13. Quit" << endl;
}

void Project2() //Main method for Project 2
{
    Library myLibrary; //Create a new Library object
    int numOfBooks = 0; //Set numOfBooks equal to zero
    int numOfUsers = 0; //Set numOfUsers equal to zero
    int numBooks = 0; //Set numBooks to zero
    int numUsers = 0; //Set numUsers to zero
    
    string optionstring; //Define option input string
    int option; //Define option integer to be processed
    
    printMenu();
    getline(cin, optionstring); //Get lines from the file as a string
    option = stoi(optionstring); //Convert optionString to integer
    
    while (option != 13) //While the user doesn't select 13
    {
        if (option == 1) //If the user selects option 1
        {
            string fileName; //Enter the books file name
            cout << "Enter a book file name: " << endl;
            getline(cin, fileName); //Store the input into fileName
            
            //call readBook function and assign value to numBooks
            numBooks = myLibrary.readBooks(fileName);
            
            
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
        
        else if (option == 2) //If the user selects option 2
        {
            string fileName; //Define user file name
            cout << "Enter a user file name: " << endl;
            getline(cin, fileName); //Store the input as fileName
            
            //Call readRatings function
            numUsers = myLibrary.readRatings(fileName);
            
            
            // If the number of users is greater than 100
            if (numUsers >= 100)
            {
                cout << "Database is full. Some users may have not been added." ;
                numOfUsers = numUsers;
                cout << endl;
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
                cout << endl;
            }
        
            //If no edge cases were caught
            else 
            {
                cout << "Total users in the database: " << numUsers << endl;
                numOfUsers = numUsers;
            } 
        }
        
        else if (option == 3) //Print the books in the books array
        {
            if (myLibrary.getNumBooks() == 0 || myLibrary.getNumUsers() == 0) //If the user has not run readRatings or readBooks previously, throw an error
            {
                cout << "Database has not been fully initialized." << endl;
            }
            else
            {
                myLibrary.printAllBooks(); //Call the printAllBooks function on myLibrary
            }
        }
        
        else if (option == 4) //If the user decides to printBooks by author
        {
            if (myLibrary.getNumBooks() == 0 || myLibrary.getNumUsers() == 0) //If the user has not run readRatings or readBooks previously, throw an error
            {
                cout << "Database has not been fully initialized." << endl;
            }
            else
            {
                string authorName = ""; //Set authorName to empty
                cout << "Enter an author name: " << endl; //Ask the user to enter an author
                getline(cin, authorName); //Store the input in authorName
                myLibrary.printBooksByAuthor(authorName); //Run the printBooksByAuthorFunction on myLibrary with authorName
            }
        }
        
        else if (option == 5) //If the user selects option 5
        {
            string userName; //Let user input username
            cout << "Enter a user name: " << endl;
            getline(cin, userName);
            
            string bookTitle; //Enter a book title
            cout << "Enter a book title: " << endl;
            getline(cin, bookTitle);
            
            //Run the getRating function on user inputs and arrayOfUsers
            int rating = myLibrary.getRating(userName, bookTitle);
            
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
        
        else if (option == 6) //If the user selects option 6
        {
            if (myLibrary.getNumBooks() == 0 || myLibrary.getNumUsers() == 0) //If the user has not run readRatings or readBooks previously, throw an error
            {
                cout << "Database has not been fully initialized." << endl;
            }
            else
            {
                string userName; //Input a username
                cout << "Enter a user name: " << endl;
                getline(cin, userName);
                
                //Run the getCountReadBooks on username and arrayOfUsers
                int ratingCount = myLibrary.getCountReadBooks(userName);
                
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
        }
        
        else if (option == 7) //If the user selects option 7
        {
            if (myLibrary.getNumBooks() == 0 || myLibrary.getNumUsers() == 0) //If the user has not run readRatings or readBooks previously, throw an error
            {
                cout << "Database has not been fully initialized." << endl; 
            }
            else
            {
                string userName = "";
                string minRating = "";
                
                cout << "Enter a user name: " << endl; //Prompt the user for a username
                getline(cin, userName); //Store the input in userName
                
                cout << "Enter a minimum rating: " << endl; //Prompt the user for a minimum rating
                getline(cin, minRating); //Store the input in minRating
                
                int MinRating = stoi(minRating); //Convert minRating to an integer
                
                myLibrary.viewRatings(userName, MinRating); //Call the viewRatings function on myLibrary
            }
        }
        
        else if (option == 8) //If the user selects option 8
        {
            if (myLibrary.getNumBooks() == 0 || myLibrary.getNumUsers() == 0) //If the user has not run readRatings or readBooks previously, throw an error
            {
                cout << "Database has not been fully initialized." << endl; 
            }
            else
            {
                string bookTitle; //User inputs a book title
                cout << "Enter a book title: " << endl;
                getline(cin, bookTitle);
                
                //Calculate average rating of book
                double average = myLibrary.calcAvgRating(bookTitle);
                
                if (average == -3) //If the average is -3
                {
                    cout << bookTitle << " does not exist." << endl;
                }
                
                else //In all other cases
                {
                    cout << "The average rating for " << bookTitle << " is " << average << endl;
                }
            }
        }
        
        else if (option == 9) //If the user selects option 9
        {
            if (myLibrary.getNumBooks() == 0 || myLibrary.getNumUsers() == 0) //If the user has not run readRatings or readBooks previously, throw an error
            {
                cout << "Database has not been fully initialized." << endl;
            }
            else
            {
                string author = "";
                cout << "Enter an author name: " << endl; //Prompt the user for an author
                getline(cin, author); //Store the input in author
                
                double averageByAuthor = myLibrary.calcAvgRatingByAuthor(author); //Calculate the average rating by author
                
                if (averageByAuthor == -3) //If the function returns -3
                {
                    cout << author << " does not exist.";
                    cout << endl;
                }
                
                else //In all other cases return and print the average
                {
                    cout << "The average rating by " << author << " is " << averageByAuthor << endl;
                }
            }
        }
        
        else if (option == 10) //If the user selects option 10
        {
            string newUser = "";
            cout << "Enter a user name: " << endl; //Prompt the user for a newUser
            getline(cin, newUser); //Store the input in newUser
            int returnValue = myLibrary.addUser(newUser); //Set the return of addUser to returnValue
            
            if (returnValue == 0) //If the return value is zero, the user already exists
            {
                cout << newUser << " already exists in the database." << endl;
            }
            
            else if (returnValue == -2) //If the return value is -2, the database is full
            {
                cout << "Database is already full. " << newUser <<  " was not added." << endl;
            }
            
            else //Welcome to the library, new User
            {
                cout << "Welcome to the library " << newUser << endl;
            }
        }
        
        else if (option == 11) //If the user selects option 11
        {
            if (myLibrary.getNumBooks() == 0 || myLibrary.getNumUsers() == 0) //If the user has not run readRatings or readBooks previously, throw an error
            {
                cout << "Database has not been fully initialized." << endl;
            }
            else
            {
                string username = "";
                string bookTitle = "";
                string newRating = "";
                
                cout << "Enter a user name: " << endl; //Prompt the user for userName
                getline(cin, username); //Store the input as username
                
                cout << "Enter a book title: " << endl; //Prompt the user for a title
                getline(cin, bookTitle); //Store the input as bookTitle
                
                cout << "Enter a new rating: " << endl; //Prompt the user for a rating of the title
                getline(cin, newRating); //Store the input as newRating
                
                int NewRating = stoi(newRating); //Convert newRating to int
                int checkedOut = myLibrary.checkOutBook(username, bookTitle, NewRating); //Call checkOutBook on myLibrary
                
                if (checkedOut == -4) //If the return value is -4, the new Rating is not valid
                {
                    cout << newRating << " is not valid." << endl;
                }
                
                else if (checkedOut == -3) //If the return value is -3
                {
                    cout << username << " or " << bookTitle << " does not exist." << endl; //The userName or title does not exist
                }
                
                else //In all other cases
                {
                    cout << "We hope you enjoyed your book. The rating has been updated." << endl;
                }
            }
        }
        
        else if (option == 12) //If the user selects option 12
        {
            if (myLibrary.getNumBooks() == 0 || myLibrary.getNumUsers() == 0) //If the user has not run readRatings or readBooks previously, throw an error
            {
                cout << "Database has not been fully initialized." << endl;
            }
            else
            {
                string username = "";
                cout << "Enter a user name: " << endl; //Prompt the user for a username
                getline(cin, username); //Store the input in username
                myLibrary.getRecommendations(username); //Call getRecommendations on myLibrary
            }
        }
        
        else //Invalid input error catch
        {
            cout << "Invalid input." << endl;
        }
        
        cout << endl;
        printMenu(); //Print the menu again
        getline(cin, optionstring); //The option with be inputed as a string
        option = stoi(optionstring); //Call stoi to convert to int
    }
    
    if (option == 13) //Exit the program
    {
        cout << "Good bye!" << endl;
    }
}

int main()
{
    Project2();
}