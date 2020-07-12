letters = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", " "]
morseCode = [".- ","-... ","-.-. ", "-.. ",". ","..-. ","--. ",".... ",".. ",".--- ","-.- ",".-.. ","-- ","-. ","--- ",".--. ","--.- ",".-. ","... ","- ",
            "..- ","...- ",".-- ","-..- ","-.-- ","--.. ","/ "]

def translateToMorseCode(letterID):
    return morseCode[letterID]

def translateToLetter(letterID):
    return letters[letterID]