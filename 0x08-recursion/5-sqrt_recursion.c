#include "main.h"
#include <stdio.h>
/***/

int equals(int n, int i, int j, int result)
{
	if (n)
	{
		result = i * j;
		return equals(n, i++, j++);
	}
	if (result == n)
	{
		printf("hello");
		return 1;
	}

}

int _sqrt_recursion(int n)
{
	int i = 1, j = 1, result;
	equals(n, i, j, result);
	return 1;

}
