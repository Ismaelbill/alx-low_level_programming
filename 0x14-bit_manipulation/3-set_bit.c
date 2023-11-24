#include "main.h"

/**
 * set_bit - function that sets the value of a bit
 * to 1 at a given index
 * @n: number
 * @index: number
 * Return: 1 if it worked, -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int res = 0;

	if (index < sizeof(unsigned long int) * 8)
	{
		res = 1UL << index;
		*n |= res;
		return (1);
	}
	return (-1);
}
