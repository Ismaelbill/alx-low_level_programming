#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: return NULL on failure,
 * otherwise a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2
*/

char *str_concat(char *s1, char *s2)
{

	int i, j;

	char *combined;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	combined = malloc(((strlen(s1) + strlen(s2)) + 1) * sizeof(char));

	if (combined == NULL)
		return (NULL);

	for (i = 0; (s1[i] != '\0'); i++)
		combined[i] = s1[i];

	for (j = 0; (s2[j] != '\0'); j++)
	{
		combined[i] = s2[j];
		i++;
	}

	return (combined);
}
