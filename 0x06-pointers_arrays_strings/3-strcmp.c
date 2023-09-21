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

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
		{
			return -1;
		} else if (*s1 > *s2)
		{
			return 1;
		}
		s1++;
		s2++;
	}

	if (*s1 == '\0' && *s2 != '\0')
	{
			return -1;
	}else if (*s1 != '\0' && *s2 == '\0')
	{
			return 1;
	}

	return (0);
}
