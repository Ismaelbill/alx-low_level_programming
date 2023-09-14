#include "main.h"

/**
 * _isupper - returns 1 if the letter is upperCase
 *
 * Result: return 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
