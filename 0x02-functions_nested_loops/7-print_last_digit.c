#include "main.h"

/**
 * print_last_digit - function print the last digit of variable n.
 *
 * @n: takes number input
 *
 * Return: lastDigit
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		n = n * -1;
	}
	lastDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
