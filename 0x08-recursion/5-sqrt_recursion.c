#include "main.h"

/**
 * func - funtion returns the natural square root of a number
 * @n: number
 * @i: number
 * Return: square root, if 'n' doesn't have square root
 * returns -1
 */

int func(int n, int i)
{
	if ((i * i) == n)
		return (i);
	else if ((i * i) > n)
		return (-1);
	else
		return (func(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number
 * Return: the number that returned from 'func' function
 */


int _sqrt_recursion(int n)
{
	int i = 1;

	return (func(n, i));
}
