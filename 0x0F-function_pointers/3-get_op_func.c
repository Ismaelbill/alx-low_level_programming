#include "3-calc.h"

/**
 * get_op_func - pointer function
 * @s: pointer to string op
 * Return: returns the function should be applied, otherwise
 * 'NULL'
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (s && ops[i].op[0] == s[0] && !s[1])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
