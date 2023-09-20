#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 *
 * @src: the string to append to 'dest'
 *
 * @dest: the full string concatenated
 *
 * Return: pointer to the resulting string 'dest'
*/

char *_strcat(char *dest, char *src)
{
	int j = 0, k = 0, i;

	while (dest[j] != '\0')
		j++;
	while (src[k] != '\0')
		k++;
	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[i - 1] = '\0';
	return (dest);
}
