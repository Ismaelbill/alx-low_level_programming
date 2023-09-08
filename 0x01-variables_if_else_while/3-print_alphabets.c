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
	char startCapital = 'A';
	char endCapital = 'Z';
	while (start <= end)
	{
		putchar(start);
		start++;
	}
	while (startCapital < endCapital)
	{
		putchar(startCapital);
		startCapital++;
	}
	putchar('\n');
	return (0);
}
