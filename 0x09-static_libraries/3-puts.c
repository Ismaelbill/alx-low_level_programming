#include "main.h"
/**
 * _puts - funtion that prints a string, followed by a new line, to stdout
 *
 * @str: parameter of _puts
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		write(STDOUT_FILENO, str, 1);
		str++;
	}
	write(STDOUT_FILENO, "\n", 1);
}
