#include "variadic_functions.h"



/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of arguments
 * Return: returns the sum of all its parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0, x;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
