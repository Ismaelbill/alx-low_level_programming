#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar
 *  function to print the alphabet a - z
 */

void print_alphabet(void)
{
	int a = 97, z = 123;

	while (a < z)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
