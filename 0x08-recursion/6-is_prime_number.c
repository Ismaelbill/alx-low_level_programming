#include "main.h"



int check(int num, int n);
/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: given number
 * Return: check function
 */

int is_prime_number(int n)
{
	return (check(n, 2));
}

/**
 * check - function checks if num is prime
 * @num: given number
 * @n: 2
 * Return: 1 if prime, and 0 if not
 */

int check(int num, int n)
{
	if (n >= num && num > 1)
		return (1);
	else if (num % n == 0 || num <= 1)
		return (0);
	else
		return (check(num, n + 1));
}
