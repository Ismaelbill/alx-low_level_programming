#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: param1
 * @n: counter
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;

	if (separator == NULL)
		exit(1);
	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		x = va_arg(args, int);
		printf("%d%s", x, separator);
	}
	printf("%d", x);
	va_end(args);
	printf("\n");
}
