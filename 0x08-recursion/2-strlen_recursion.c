#include "main.h"

/***/

int _strlen_recursion(char *s)
{
	int i = 0;
	if (*s == '\0')
	{
		return (i);
	}else
	{
		i += 1;
		_strlen_recursion(s + 1);
	}
	return i;
}

