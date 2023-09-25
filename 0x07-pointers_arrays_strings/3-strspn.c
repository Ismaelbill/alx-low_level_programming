#include "main.h"


unsigned int _strspn(char *s, char *accept)
{
	unsigned int result = 1;
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s != *accept)
				break;
			if (*s == *accept)
				result++;
			accept++;
			s++;
		}
	}
	return (result);
}
