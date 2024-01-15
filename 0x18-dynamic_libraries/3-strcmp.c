#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: param1
 *
 * @s2: param2
 *
 * Return: 0, if s1 and s2 are equal
 *         negative value if s1 is less than s2
 *         positive value if s1 is greater than s2
*/

int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			result = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (result);
}
