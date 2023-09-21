#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase
 *
 * @str: string to change to upper case
 *
 * Return: 'str' changed to uppercase
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; (str[i] != '\0'); i++)
	{
		if (((int)str[i] >= 97 && (int)str[i] <= 122))
		{
			str[i] = (char)(int)str[i] - 32;
		}
	}
	return (str);
}
