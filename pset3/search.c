#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    // int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    // int n = get_int("Number: ");

    string strings[] = {"David", "Emma", "John", "James", "Mary", "Sarah", "Michael"};

    string s = get_string("String: ");
    for (int i = 0; i < 7; i++) {
        if (strcmp(strings[i], s) == 0) {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}