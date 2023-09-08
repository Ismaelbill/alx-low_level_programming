#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * */

int main(void)
{
	char end = 'z';
	for (char start = 'a'; start <= end; start++)
	{
		putchar(start);
	}
	putchar('\n');
	return (0);
}
