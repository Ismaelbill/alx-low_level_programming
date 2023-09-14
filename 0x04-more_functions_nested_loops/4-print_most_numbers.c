#include "main.h"

/**
 * print_most_numbers - function prints numbers from 0 to 9 except 2 and 4.
*/

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
