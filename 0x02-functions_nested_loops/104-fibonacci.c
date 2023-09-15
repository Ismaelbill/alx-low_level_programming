#include "main.h"

/**
 * main - function that prints the first 98 fibonacci numbers
 *
 * Return: 0 (Success)
*/


int main(void)
{
/*
	unsigned long  i, current = 1, previous = 0, tmp = 0;

	for (i = 0; i <= 89; i++)
	{
		tmp = current + previous;
		if (i == 89)
		{
			printf("%ld", tmp);
			break;
		}
		printf("%ld, ", tmp);
		previous = current;
		current = tmp;
	}
	printf("\n");*/
	unsigned long int a = 1, b = 2;
    int count = 0;

    printf("%lu, %lu", a, b);
    count += 2;

    while (count < 98) {
        unsigned long next = a + b;

        printf(", %lu", next);
        count++;

        a = b;
        b = next;
    }

    printf("\n");
    return (0);
}
