#include <stdio.h>

/**
 * main - hello
 *
 * 
 */
int main(void)
{

	int i, j;

	for (i = 0; i <= 0; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 0 && j == 9)
				break;
			if (i < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	

	}
	putchar('\n');
	return (0);
}
