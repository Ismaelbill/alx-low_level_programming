#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: points to a string
 *
 * @c: character to check if it's exist
 *
 * Return: a pointer to the first occurrence of the character 'c'
 * in the string 's', or 'NULL' if the character is not found
 */

char *_strchr(char *s, char c)
{
	char *result = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			result = s;
			break;
		}
		s++;
	}
	return (result);
}
