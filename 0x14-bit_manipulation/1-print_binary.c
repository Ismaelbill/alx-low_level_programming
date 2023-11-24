#include "main.h"

/**
 * print_binary - function that prints the binary representation
 * of a number
 * @n: number
 */

void print_binary(unsigned long int n)
{
	int num = 0, i = 0;
	char b[100] = "";

	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		num = n & 1;
		if (num == 1)
			b[i] = '1';
		else
			b[i] = '0';
		n >>= 1;
		i++;
	}
	num = 0;
	while (b[num])
	{
		_putchar(b[i - 1]);
		i--;
		num++;
	}
}
