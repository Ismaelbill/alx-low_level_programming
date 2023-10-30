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
	int length, i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
		;

	ptr = malloc(sizeof(*str) * length + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		ptr[i] = str[i];
	return (ptr);
}
