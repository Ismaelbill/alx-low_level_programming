#include "main.h"

/**
 * func - funtion use recursion for prime numbers
 * @n: number
 * @i: number
 * Return: return (1) if it's prime, otherwise
 * (0).
 */

int func(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (n % i == 0 && i < n)
		return (0);
	else if (i == n)
		return (1);
	else
		return (func(n, i + 1));
}

/**
 * is_prime_number - function that returns 1 if
 * the input integer is a prime number, otherwise return 0.
 * @n: number
 * Return: returns the returned value from 'func' function
 */

int is_prime_number(int n)
{
	return (func(n, 2));
}

