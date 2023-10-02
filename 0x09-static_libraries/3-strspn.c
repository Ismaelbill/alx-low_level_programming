#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: the whole string
 *
 * @accept: substring
 *
 * Return: the number of bytes in the initial segment of 's' which
 * consist only of bytes from 'accept'
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
		i++;
	}
	return (i);
}
