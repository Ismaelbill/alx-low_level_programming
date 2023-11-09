#include "variadic_functions.h"



void func(int i, int length, const char * const format);

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * @...: arguments
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *s, *sep = "";
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%i", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				printf("%s%s", sep, s ? s : "(nil)");
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
