#include <stdio.h>

void print()
{
    printf("_putchar\n");
}

void print_alphabet(void)
{
    int i = 97;
    while (i < 123) {
        putchar(i);
        i++;
    }
    putchar('\n');
}