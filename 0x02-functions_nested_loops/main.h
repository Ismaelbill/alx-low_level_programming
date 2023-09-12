#include <stdio.h>

void print()
{
    printf("_putchar\n");
}

void print_alphabet(void)
{
    for (int i = 97; i < 123; i++) {
        putchar(i);
    }
    putchar('\n');
}