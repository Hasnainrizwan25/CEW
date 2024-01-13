

#include <stdio.h>

int main() {
    char string[] = "Hasnain";
    printf("Original string: %s\n", string);

    for (int i = 0; i < sizeof(string)/sizeof(char); i++)
    {
        int asciiValue = string[i];

        if (asciiValue >= 65 && asciiValue <= 90) {
            int val = 97 + (asciiValue - 65);
            char character = (char)val;
            string[i] = character;
        } else if (asciiValue >= 97 && asciiValue <= 122)
        {
            int val = 65 + (asciiValue - 97);
            char character = (char)val;
            string[i] = character;
        }
    }



    printf("Final string: %s", string);

    return 0;
}
