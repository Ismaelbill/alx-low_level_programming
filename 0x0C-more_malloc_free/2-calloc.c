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
	void *ptr;
	char *c, zero = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(int) * nmemb + 1);
	if (ptr == 0)
		return (NULL);
	c = ptr;
	for (i = 0; i < nmemb; i++)
	{
		c[i] = zero;
	}

	return (ptr);
}
