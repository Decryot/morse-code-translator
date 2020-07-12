#ifndef MCENCRYPTOR
#define MCENCRYPTOR

#include <iostream>
using namespace std;

class ENCRYPTOR {
private:    

public:
    string morseCode[27] = {".- ","-... ","-.-. ","-.. ",". ","..-. ","--. ",".... ",".. ",".--- ","-.- ",".-.. ","-- ",
                            "-. ","--- ",".--. ","--.- ",".-. ","... ","- ","..- ","...- ",".-- ","-..- ","-.-- ","--.. ","/ "};

    string generateCode(int letterID) {
        return morseCode[letterID];
    }
};

#endif
