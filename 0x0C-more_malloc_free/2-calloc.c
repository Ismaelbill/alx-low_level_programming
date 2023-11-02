#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: size of array
 * @size: size of the  data type
 * Return: returns a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;
	(void)i;
	if (nmemb == 0 || size == 0)
		return(NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
