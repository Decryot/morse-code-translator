import morsecode

letters = morsecode.letters

word_to_morse = "hello"
encypted_word_to_morse = ""

word_in_morse = ".... . .-.. .-.. ---"
decrypted_word_to_letters = ""

def start():
    global encypted_word_to_morse, decrypted_word_to_letters

    # Encrypting
    chars_in_word = list(word_to_morse)

    for i in range(len(chars_in_word)):
        for j in range(len(letters)):
            if chars_in_word[i] == letters[j]:
                encypted_word_to_morse += morsecode.translateToMorseCode(j)

    print(encypted_word_to_morse)

    # Decrypting
    words_in_morse = word_in_morse.split(" ");

    for word in words_in_morse:
        for wordInMorse in range(len(morsecode.morseCode)):
            if (word+" " == morsecode.morseCode[wordInMorse]):
                decrypted_word_to_letters += morsecode.translateToLetter(wordInMorse)

    print(decrypted_word_to_letters)

start()
