#include <iostream>
using namespace std;

string keywordCipher(string message, string key, bool flag)
{
    if (flag == true) //Checks to see if the user wants to encrypt or decrypt a message
    {
        string ciphered = ""; //Create a string to keep track of the ciphered alphabet
        string cipher = ""; //Create a cipher string to contain the final encrypted string
        bool arrayForAlphabet[26] = {0}; //Represents the letters of the alphabet
        
        for (int i = 0; i < key.length(); i++) //Insert the key at the start of a new alphabet
        {
            if (key[i] >= 'A' && key[i] <= 'Z') //If the char of key is uppercase
            {
                if (arrayForAlphabet[key[i] - 65] == 0) //If the value at arrayForAlphabet is false
                {
                    ciphered += key[i]; //Add the key to the ciphered upper case alphabet
                    arrayForAlphabet[key[i] - 65] = 1; 
                }
            }
            else if (key[i] >= 'a' && key[i] <= 'z') //If the char of key is lowercase
            {
                if (arrayForAlphabet[key[i] - 97] == 0) //If the value at arrayForAlphabet is false
                {
                    ciphered += key[i] - 32; //Add the key to the ciphered lower case alphabet
                    arrayForAlphabet[key[i]-97] = 1; 
                }
            }
        }
        
        for (int j = 0; j < 26; j++) //Loop inserts the other letters of the alphabet
        {
            if (arrayForAlphabet[j] == 0)
            {
                arrayForAlphabet[j] = 1;
                ciphered += char(j + 65);
            }
        }
        
        for (int k = 0; k < message.size(); k++) //Convert the message to a keywordCiphered string
        { 
            if (message[k] >= 'a' && message[k] <= 'z') //If the message character is lower case
            { 
                int position = message[k] - 97; //Change its position by its ASCII value
                cipher += ciphered[position]; //Add the position of ciphered to cipher
            } 
            else if (message[k] >= 'A' && message[k] <= 'Z') //Same as above for upper case letters
            { 
                int position = message[k] - 65; 
                cipher += ciphered[position]; 
            } 
            else //In all other cases add message[k] to cipher
            { 
                cipher += message[k]; //Spaces, special chars etc.
            } 
        } 
        return cipher; //Return cipher
    }
    
    if (flag == false) //If the user chooses to decrypt 
    {
        string deciphered = ""; //Tracks ciphered alphabet
        string decipher = ""; //Tracks the final decrypted string
        string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //Reference to actual alphabet
        bool arrayForAlphabetDecryption[26] = {0}; //Represents the letters of the alphabet
        
        for (int l = 0; l < key.length(); l++) //Loop through key length
        {
            if (key[l] >= 'A' && key[l] <= 'Z') //If the char of key is uppercase
            {
                if (arrayForAlphabetDecryption[key[l]-65] == 0)  //If the value at arrayForAlphabet is false
                { 
                    deciphered += key[l]; //Add the key to the deciphered upper case alphabet
                    arrayForAlphabetDecryption[key[l]-65] = 1; 
                } 
            }
            else if (key[l] >= 'a' && key[l] <= 'z') //If the char of key is lowercase
            { 
                if (arrayForAlphabetDecryption[key[l]-97] == 0) //If the value at arrayForAlphabet is false
                { 
                    deciphered += key[l] - 32; //Add the key to the deciphered lower case alphabet
                    arrayForAlphabetDecryption[key[l]-97] = 1; 
                } 
            }  
        }
        
        for (int m = 0; m < 26; m++) //Create the decryption alphabet
        { 
            if (arrayForAlphabetDecryption[m] == 0) 
            { 
                arrayForAlphabetDecryption[m] = 1; 
                deciphered += char(m + 65); 
            } 
        }
        
        for (int n = 0; n < message.length(); n++) //Loop through the message and decrypt it
        {
            if (message[n] >= 'a' && message[n] <= 'z') //If the message character is lower case
            {
                int positionDecypher = message[n] - 32; //Change its position by its ASCII value
                decipher += alphabet[positionDecypher]; //Add the position of deciphered to decipher
            }
            else if (message[n] >= 'A' && message[n] <= 'Z') //If the message char is upper case
            {
                int positionDecypher = message[n]; //Change its position by its ASCII value
                decipher += alphabet[positionDecypher]; //Add the position of deciphered to decipher 
            }
            else
            {
                decipher += message[n]; //Add the special chars and spaces to decipher
            }
        }
        return decipher; //Return decipher 
    }
}

int main()
{
    //Test case 1
    //Expected output
    //ZLJEFT DTOT
    string message = "ZOMBIE HERE";
    string key = "SECRET";
    bool flag = true;
    cout << keywordCipher(message,key,flag) << endl;

    //Test case 2
    //Expected output
    //JHABU TUMU
    string message1 = "ZLJEFT DTOT";
    string key1 = "SECRET";
    bool flag1 = false;
    cout << keywordCipher(message1,key1,flag1) << endl;
}