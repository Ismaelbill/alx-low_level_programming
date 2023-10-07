#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: passed value
 * Return: Returns a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *mallP = (int *)malloc(b);

	if (mallP == 0)
		exit(98);
	return (mallP);
}
