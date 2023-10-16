// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef char* string;

// Function to replace vowels with numbers
string replace(string input) {
    int length = strlen(input);
    for (int i = 0; i < length; i++)
    {
        switch (input[i]) {
            case 'a':
            case 'A':
                input[i] = '6';
                break;
            case 'e':
            case 'E':
                input[i] = '3';
                break;
            case 'i':
            case 'I':
                input[i] = '1';
                break;
            case 'o':
            case 'O':
                input[i] = '0';
                break;
            case 'u':
            case 'U':
                // should do nothing
                break;
            default:
                break;
        }
    }
    return input;
}

int main(int argc, string argv[])
{
    if (argc != 2) {
        printf("Error: Please provide exactly one command-line argument.\n");
        return 1;
    }

    string convertedWord = replace(argv[1]);
    printf("%s\n", convertedWord);
    return 0;
}
