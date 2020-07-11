using System;
namespace morsecodetranslator
{
    public class MorseCodeTranslator
    {
        static string[] letters = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", " " };
        public static string[] morsecode =
        {
            ".- ",
            "-... ",
            "-.-. ",
            "-.. ",
            ". ",
            "..-. ",
            "--. ",
            ".... ",
            ".. ",
            ".--- ",
            "-.- ",
            ".-.. ",
            "-- ",
            "-. ",
            "--- ",
            ".--. ",
            "--.- ",
            ".-. ",
            "... ",
            "- ",
            "..- ",
            "...- ",
            ".-- ",
            "-..- ",
            "-.-- ",
            "--.. ",
            "/ "
        };

        public static string translateChar(int letterId)
        {
            string code = morsecode[letterId];
            return code;
        }

        public static string translateCode(int letterId)
        {
            string letter = letters[letterId];
            return letter;
        }
    }
}
