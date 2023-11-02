#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: pointer
 * @s2: pointer
 * @n: number
 * Return: returns pointer to a newly allocated space in
 * memory, otherwise (NULL)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, length, length1;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length = strlen(s1);
	length1 = strlen(s2);
	if (n >= length1)
		n = length1;

	ptr = malloc(length * n + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
