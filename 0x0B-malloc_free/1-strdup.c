#include "main.h"

/**
 * _strdup -  function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string to copy
 * Return: Returns NULL if str = NULL,
 * otherwise returns a pointer to the duplicated string
*/

char *_strdup(char *str)
{
	char *strcp;

	if (str == NULL)
		return (NULL);

	strcp = malloc(((strlen(str)) + 1) * sizeof(char));

	if (strcp == NULL)
		return (NULL);
	strcpy(strcp, str);

	return (strcp);
}
