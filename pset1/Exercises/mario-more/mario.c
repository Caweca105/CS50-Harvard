#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for height
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height > 8 || height <= 0);

    // Print pyramid
    for (int i = 0; i < height; i++)
    {
        // print spaces
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }
        // print hashes for left pyramid
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        // print spaces
        printf("  ");
        // print hashes for right pyramid
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // print new line
        printf("\n");
    }
}