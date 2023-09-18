#include "main.h"

/**
 * rev_string - function that reverse a string
 *
 * @s: parameter
 */

void rev_string(char *s)
{
	int length = 0, i;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	for (i = length; i > 0; i--)
	{
		write(STDOUT_FILENO, s, 1);
		s--;
	}

}
