#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *seperator = "";
	char current;

	va_start(args, format);

	while (format && format[i])
	{
		current = format[i];
		switch (current)
		{
			case 'c':
				printf("%s%c", seperator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%i", seperator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", seperator, va_arg(args, double));
				break;
			case 's':
				{
					char *str = va_arg(args, char *);

					if (str == NULL)
						str = "(nil)";
					printf("%s%s", seperator, str);
				}
				break;
			default:
				i++;
				continue;
		}
		seperator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
