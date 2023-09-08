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

	while (start <= end)
	{
		putchar(start);
		if (start == 'q' || start == 'e')
		{
			start++;
		}
		start++;
	}
	putchar('\n');
	return (0);
}
