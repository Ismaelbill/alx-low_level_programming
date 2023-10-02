#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @n: is the bytes of the memory area pointed to by 's'
 *
 * @s: pointer to the starting address of the memory block
 *
 * @b: value to fill the memoryy with
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
