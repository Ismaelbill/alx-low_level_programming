#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: length of arguments
 * @...: integers
 * Return: returns sum of all params,
 * otherwise (0)
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x = 0;

	if (n == 0)
		return (0);

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		x += va_arg(args, int);
	va_end(args);
	return (x);
}
