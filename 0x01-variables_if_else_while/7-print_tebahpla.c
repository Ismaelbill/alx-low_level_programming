#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char end = 'z';
	char start = 'a';

	while (end >= start)
	{
		putchar(end);
		end--;
	}
	putchar('\n');
	return (0);
}
