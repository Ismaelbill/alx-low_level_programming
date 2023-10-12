#include "3-calc.h"

/**
 * op_add - function adds a and b
 * @a: number 1
 * @b: number 2
 * Return: sum of 'a' and 'b'
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function subs a and b
 * @a: number 1
 * @b: number 2
 * Return: sub of 'a' and 'b'
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function muls a and b
 * @a: number 1
 * @b: number 2
 * Return: mul of 'a' and 'b'
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function divs a and b
 * @a: number 1
 * @b: number 2
 * Return: div of 'a' and 'b'
*/

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - function mods a and b
 * @a: number 1
 * @b: number 2
 * Return: mod of 'a' and 'b'
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
