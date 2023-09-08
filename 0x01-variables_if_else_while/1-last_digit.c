#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int lastdigit = n % 10;
	if (lastdigit > 5)
		printf("Last digit of %d and is greater than 5", lastdigit);
	else if (lastdigit == 0)
		printf("last digit %d and is 0", lastdigit);
	else if (lastdigit < 6 && lastdigit > 0)
		printf("Last digit %d and is less than 6 and not 0", lastdigit);
	return (0);
}
