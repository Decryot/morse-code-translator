using System;

namespace morsecodetranslator
{
    class MainClass
    {
        static string[] letters = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", " "};
        static string translatedMessage, message = "hello world";

        static string messageToTranslate = ".... . .-.. .-.. ---", newTranslatedMessage;

        public static void Main(string[] args)
        {
            char[] messageChars = message.ToCharArray();

            // encrypting morse code
            for (int msgChar = 0; msgChar < messageChars.Length; msgChar++) {
                for (int letter = 0; letter < letters.Length; letter++) {
                    if (messageChars[msgChar].ToString().ToLower() == letters[letter]) {
                        translatedMessage += MorseCodeTranslator.translateChar(letter);
                    }
                }
            }

            Console.WriteLine(translatedMessage);

            // decrypting morse code
            string[] morseCodeWords = messageToTranslate.Split(' ');

            for (int msgWord = 0; msgWord < morseCodeWords.Length; msgWord++) {
                for (int letter = 0; letter < letters.Length; letter++) {

                    if (morseCodeWords[msgWord].ToLower() == MorseCodeTranslator.morsecode[letter].TrimEnd(' ')) {
                        newTranslatedMessage += MorseCodeTranslator.translateCode(letter);
                    }
                }
            }

            Console.WriteLine(newTranslatedMessage);
        }
    }
}
