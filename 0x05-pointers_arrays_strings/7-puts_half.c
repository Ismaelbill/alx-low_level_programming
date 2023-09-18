#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: parameter
*/

void puts_half(char *str)
{

	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
	{
		for (j = (i / 2); j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		_putchar(str[((i - 1) / 2)]);
	}
	_putchar('\n');
}
