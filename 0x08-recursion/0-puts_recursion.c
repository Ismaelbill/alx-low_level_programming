#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * followed by a new line
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		write(STDOUT_FILENO, s, 1);
		_puts_recursion(s + 1);
	}
	else
		write(STDOUT_FILENO, "\n", 1);
}
