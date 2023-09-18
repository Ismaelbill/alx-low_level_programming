#include "main.h"

void print_rev(char *s)
{
    int length = 0, i;
    while (*s != '\0')
	{
        s++;
        length++;
	}
    for (i = length; i > 0; i--)
    {
        s--;
        write(STDOUT_FILENO, s, 1);
    }
    write(STDOUT_FILENO, "\n", 1);
}