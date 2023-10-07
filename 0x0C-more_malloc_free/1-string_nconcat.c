#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: length
 * Return: The returned pointer shall point to a newly allocated space in
 * memory, which contains s1, followed by the first n bytes of s2,
 * and null terminated
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, result, calc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 1; s1[i] != '\0'; i++)
		i++;
	for (j = 1; j <= n; j++)
		j++;

	if (j < n)
	{
		str = malloc((i + j) * sizeof(char));
		if (str == 0)
			return (NULL);

		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
		for (j = 0; s2[j] != '\0'; i++, j++)
			str[i] = s2[j];
		str[i] = '\0';
	}
	else
	{
		result = j - n;
		calc = j - result;

		str = malloc((i + calc) * sizeof(char));
		if (str == 0)
			return (NULL);

		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
		for (j = 0; j < calc; i++, j++)
			str[i] = s2[j];
		str[i] = '\0';
	}
	return (str);
}
