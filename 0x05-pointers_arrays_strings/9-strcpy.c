#include "main.h"

/**
 * *_strcpy - function that copies the string pointed by 'src'
 *
 * @dest: parameter
 *
 * @src: parameter
 *
 * Return: the pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{

	int i, j;

	while (src[i] != '\0')
		i++;
	for (j = 0; j < i && src[j] != '\0'; j++)
		dest[j] = src[j];
	for ( ; j < i; j++)
		dest[j] = '\0';
	return (dest);
}
