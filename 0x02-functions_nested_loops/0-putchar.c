#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char words[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(words[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
