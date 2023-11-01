#include "main.h"

/**
 * strtow - function that splits a string into words
 * @str: pointer
 * Return: returns a pointer to an array of strings
 */

char **strtow(char *str)
{
	int i, k, j, l, countWord = -1, wordStart = 0;
	char **ptr;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] == ' ' && str[i + 1] != ' ') ||
				(str[i] != ' ' && str[i + 1] == '\0'))
			countWord++;
	}
	ptr = malloc(sizeof(char *) * countWord + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < countWord + 1; i++)
	{
		while (str[wordStart] == ' ')
			wordStart++;
		j = 0;
		while (str[wordStart + j] != ' ' && str[wordStart + j] != '\0')
			j++;
		ptr[i] = malloc(sizeof(char) * j + 1);
		if (ptr[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(ptr[k]);
			free(ptr);
		}
		for (l = 0; l < j; l++)
		{
			ptr[i][l] = str[wordStart + l];
		}
		ptr[i][l] = '\0';
		wordStart += j;
	}
	ptr[countWord + 1] = NULL;
	return (ptr);
}
