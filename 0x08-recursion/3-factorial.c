#include "main.h"

/**
 * factorial -  function that returns the factorial of a given number
 * @n: number
 * Return: returns factorial of 'n',
 * else if 'n' lower than 0, it returns -1
 */


int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
