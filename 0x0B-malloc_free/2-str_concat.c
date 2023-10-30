#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: returns pointer to a newly allocated space in
 * memory which contains contents of 's1', followed by the
 * contents of 's2', and null terminated, otherwise 'NULL'
 */


char *str_concat(char *s1, char *s2)
{
	char *combined;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	combined = malloc(sizeof(char) * (i + j + 1));
	if (combined == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		combined[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		combined[i] = s2[j];
		i++;
	}
	combined[i] = '\0';
	return (combined);

}
