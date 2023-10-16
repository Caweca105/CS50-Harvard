#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    int height = get_int("Height: ");
    draw(height);
}

void draw(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++) {
            printf("#");
        }
        printf("\n");
    }
}