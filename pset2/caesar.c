#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Ensure only one command-line argument is present
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int n = strlen(argv[1]);

    // Check every character of the key to ensure it's a digit
    for (int i = 0; i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert the key from string to integer after verifying its a valid number
    int k = atoi(argv[1]) % 26;

    // Prompt user for plaintext
    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");

    // Iterate over the plaintext and apply the cipher transformation
    for (int i = 0, length = strlen(plaintext); i < length; i++)
    {
        char c = plaintext[i];

        if (isalpha(c))
        {
            char base = islower(c) ? 'a' : 'A';
            printf("%c", (c - base + k) % 26 + base);
        }
        else
        {
            printf("%c", c);
        }
    }

    printf("\n");
    return 0;
}
