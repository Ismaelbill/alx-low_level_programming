#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: size of bytes to allocate in memory
 * @size: size of of data type
 * Return: if it fails returns NULL,
 * otherwise a pointer to the specific memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb <= 0 || size == 0)
		return (NULL);
	arr =  malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;
	return (arr);
}
