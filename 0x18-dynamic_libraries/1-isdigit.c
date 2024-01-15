#include "main.h"

/**
 * _isdigit - function checks if c between 0 - 9
 *
 * @c: input number
 *
 * Return: returns 1 if 'c' between 0 - 9,
 *  otherwise returns 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
