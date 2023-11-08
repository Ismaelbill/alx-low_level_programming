#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: pointer to a string
 * @f: function pointer that taks pointer in argument
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
