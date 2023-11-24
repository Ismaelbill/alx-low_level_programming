#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int.
 * @b: string
 * Return: the converted number, otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, j;
	unsigned int sum = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	j = i;
	i = 0;

	while (b[i])
	{
		if (b[j - 1] == '1')
			sum += (1 << i);
		i++;
		j--;
	}
	return (sum);
}
