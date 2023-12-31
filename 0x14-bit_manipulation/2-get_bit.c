#include "main.h"

/**
 * get_bit - function returns the value of a bit at a given
 * index
 * @n: number
 * @index: number
 * Return: returns the value of the bit at the index index,
 * or -1 of an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index < sizeof(unsigned long int) * 8)
	{
		n >>= index;
		x = n & 1;
		return (x);
	}
	return (-1);
}
