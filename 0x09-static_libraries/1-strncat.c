#include "main.h"

/**
 * *_strncat - function that concatenates two strings.
 *
 * @src: the string to append to 'dest'
 *
 * @dest: the string concatenated
 *
 * @n: maximum number of characters to concatenate from 'src'
 *
 * Return: pointer to the resulting string 'dest'
*/

char *_strncat(char *dest, char *src, int n)
{
	int j = 0, i;

	while (dest[j] != '\0')
		j++;
	for (i = 0; (src[i] != '\0'); i++)
	{
		if (i == n)
			break;
		dest[j++] = src[i];
	}
	return (dest);
}
