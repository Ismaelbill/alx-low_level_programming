#include "main.h"

/**
 * _isupper - function to check if input is upper case
 *
 * @c: input character
 *
 * Return: returns 1 if 'c' is upper case
 *         otherwise always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
