#include "variadic_functions.h"



void func(int i, int length, const char * const format);

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * @...: arguments
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, length = 0;
	char *s;
	va_list args;

	va_start(args, format);

	while (format[i])
	{
		if ((format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's'))
			length++;
		i++;
	}

	i = 0;

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				printf("%s", s ? s : "(nil)");
				break;
		}
		func(i, length, format);
		i++;
	}
	printf("\n");
	va_end(args);
}

/**
 * func - function print comma and space after the arguments
 * accept the last one
 * @i: number
 * @l: length of 'f'
 * @f: list of arguments
 */
void func(int i, int l, const char * const f)
{
	if (i < l && (f[i] == 'c' || f[i] == 'i'
		|| f[i] == 'f' || f[i] == 's'))
		printf(", ");
}
