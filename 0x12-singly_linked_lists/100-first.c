#include "lists.h"

void print_f(void) __attribute__((constructor));

/**
 * print_f - function that prints a string before main function
 */

void print_f(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
