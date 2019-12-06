#include <iostream>
using namespace std;

string vigenereCipher(string message, string key, bool flag) //This algorithm takes in a message and key and encrypts or decrypts it utlizing the vigenere cipher
{
    if (flag == true) //If the user chooses to encrypt a message
    {
        string encrypted = ""; //Set the final encrypted string to an empty string
        for (int j = 0, k = 0; j < message.length(); ++j) //Loop through the length of the message
        {
            char c = message[j]; //Store each character in message into a character

            if (c >= 'a' && c <= 'z') //If the character is of higher ASCII value than a and less than ASCII value of z 
            {
                c += 'A' - 'a'; //Set character to equal to the ASCII value of A - a - basically capitalizes all chars in message
            }
            
            else if (c < 'A' || c > 'Z') //Else if the character is capitilized, continue the program 
            {
                continue;
            }
            
            encrypted += (c + key[k] - 2 * 'A') % 26 + 'A'; //Convert c to the corresponding letter in the vigenere cipher alphabet
            if (c == ' ')
            {
                encrypted += c;
            }
            
            k = (k + 1) % key.length(); //Increment k by 1 % key.length
        }
        return encrypted; //Return the encrypted string
    }
    
    if (flag == false) //If the user selects to decrypt
    {
        string decrypted = "";    //Create a string to keep track of the decrypted sstring
        for (int l = 0, m = 0; l < message.length(); l++) //Loop through the encrypted messsage
        {
            char d = message[l]; //Convert each character in message to char variable d

            if (d >= 'a' && d <= 'z') //Capitalize d if it is lower case
            {
                d += 'A' - 'a';
            }
            
            else if (d < 'A' || d > 'Z') //If d is already capitalized, continue the program
            {
                continue;
            }
            
            decrypted += (d - key[m] + 26) % 26 + 'A'; //Convert d into the appropriate letter from the vigenere alphabet
            
            if (d == ' ')
            {
                decrypted += d;
            }
            m = (m + 1) % key.length(); //Increment m by 1 % key.length()
        }
        return decrypted;
    }
}

int main()
{
    //Test case 1
    //Expected output
    //NVOGFKVY
    cout << vigenereCipher ("UNICORNS", "TIGER", true) << endl;
    
    
    //Test case 2
    //Expected output
    //UNICORNS
    cout << vigenereCipher("NVOGFKVY", "TIGER", false) << endl;
}