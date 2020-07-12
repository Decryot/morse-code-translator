#include <iostream>

#ifndef MCDENCRYPTER
#define MCDENCRYPTER

using namespace std;

class DECRYPTER {
private:
    string letters[27] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"," "};

public:
    std::string decryptMorseCode(int letterID) {
        return letters[letterID];
    }
};

#endif