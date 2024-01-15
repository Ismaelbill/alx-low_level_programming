#include "main.h"

/**
 * _strpbrk - function that searches a string for any
 * of a set of bytes.
 * @s: string.
 * @accept: substring
 * Return: a pointer to the byte in 's' that matches one of
 * the bytes in 'accept', or 'NULL' if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	char *j;

	for (; *s != '\0'; s++)
	{
		for (j = accept; *j != '\0'; j++)
		{
			if (*s == *j)
				return (s);
		}
	}
	return ('\0');
}
