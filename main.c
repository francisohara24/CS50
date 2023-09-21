// program for printing out a column of bricks of height 3

#include <stdio.h>

int main () {
    char brick_symbol[] = "[x]";
    int column_height = 3;

    for (int i = 0; i < 3; i ++){
        printf("%s \n", brick_symbol);
    }

    return 0;
}