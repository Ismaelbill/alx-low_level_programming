#include "main.h"


/**
 * times_table - function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i = 0, j = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			int result = i * j;

			if (result < 10)
			{
				_putchar(result + '0');
			} else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			} else
			{
				_putchar('\n');
			}
		}
	}
}
