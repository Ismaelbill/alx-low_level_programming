#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int.
 * @b: string
 * Return: the converted number, otherwise 0
 */


unsigned int binary_to_uint(const char *b)
{
	int i = 0, j, arr[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
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
			sum += arr[i];
		i++;
		j--;
	}
	return (sum);
}
