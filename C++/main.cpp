#include <iostream>
#include <string>
#include <sstream>

#include "encryptor.h"
#include "decryptor.h"

ENCRYPTOR encryptor;
DECRYPTER decrypter;

using namespace std;
string letters[27] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", " " };
string wordToEncrypt = "hello", encryptedWord;
string wordInMorse = ". .- -", decryptedWord;

int main() {
    int lengthOfWord = wordToEncrypt.length();
    char lettersInWord[lengthOfWord];

    strcpy(lettersInWord,wordToEncrypt.c_str());

    // encrypting to morse code
    for (int msgChar = 0; msgChar < lengthOfWord; msgChar++) {
        for (int letterID = 0; letterID < 27; letterID++) {

            string character;
            stringstream sCharacter;

            sCharacter << lettersInWord[msgChar];
            character = sCharacter.str();

            if (character == letters[letterID]) {
                encryptedWord+=encryptor.generateCode(letterID);
            }
        }
    }

    // decrypting
    string words[3];
    stringstream ssin(wordInMorse);
    int index = 0;
    while (ssin.good() && index < 3) {
        ssin >> words[index];
        ++index;
    }

    for (int word = 0; word < 3; word++) {
        for (int morseCodeID = 0; morseCodeID < 27; morseCodeID++) {
            string wordWithEnd = words[word] + " ";
            
            if (wordWithEnd == encryptor.morseCode[morseCodeID]) {
                decryptedWord += decrypter.decryptMorseCode(morseCodeID);
            }
        }
    }

    cout << decryptedWord << " decrypted" << endl;
    cout << encryptedWord << " encrypted" << endl;
}