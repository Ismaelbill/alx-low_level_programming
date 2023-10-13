#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: param1
 * @n: counter
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list args;

	if (separator == NULL)
		separator = "";

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char*);
		if (i == n - 1)
		{
			printf("%s\n", x);
			return;
		}
		printf("%s%s", x, separator);
	}
	va_end(args);
}
