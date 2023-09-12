#include "main.h"

/**
 * print_alphabet_x10 - utilizes on the _putchar
 *  function to print the alphabet a - z * 10
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int a = 97, z = 123;

		while (a < z)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
