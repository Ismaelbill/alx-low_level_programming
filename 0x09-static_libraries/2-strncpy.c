#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: a pointer to the destinatio buffer where the
 * characters will be copied
 *
 * @src: a pointer to the source string from which
 * characters will be copied
 *
 * @n: the maximum number of characters to be
 * copied from 'src'
 *
 * Return: a copied string
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i, j = 0;

	while (src[j] != '\0')
		j++;
	for (i = 0; ((src[i] != '\0') && (i < n)); i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
