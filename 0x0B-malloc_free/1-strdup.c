#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter.
 * @str: pointer to string
 * Return: returns pointer to the duplicated string
 */


char *_strdup(char *str)
{
	int length = strlen(str) + 1, i;
	char *ptr;

	if (str == NULL)
                return (NULL);

	ptr = malloc(sizeof(char) * length);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		ptr[i] = str[i];
	return (ptr);
}
