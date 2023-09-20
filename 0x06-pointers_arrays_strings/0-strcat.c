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
	int j = 0, i;

	while (dest[j] != '\0')
		j++;
	for (i = 0; i < src[i]; i++)
		dest[j++] = src[i];
	return (dest);
}
