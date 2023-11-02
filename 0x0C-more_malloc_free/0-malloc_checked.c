#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the number to allocate in the memory
 * Return: returns a pointer to the allocated memory, otherwise
 * (98)
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
