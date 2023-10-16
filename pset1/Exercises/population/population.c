#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x;
    do
    {
        x = get_int("Start size: ");
    }
    while (x < 9);

    int y;
    do
    {
        y = get_int("End size: ");
    }
    while (y < x);

    int z = 0;
    while (x < y)
    {
        x = x + (x / 3) - (x / 4);
        z++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", z);
}
