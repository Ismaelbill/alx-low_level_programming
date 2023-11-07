#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer to the memory allocated
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
	}
	if (new_size > old_size)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		exit(1);
	}
	return (ptr);
}
