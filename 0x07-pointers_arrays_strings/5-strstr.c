#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{

	char *i;

	for (; *haystack != '\0'; haystack++)
	{
		for (i = needle; *i != '\0'; i++)
		{
			if (*haystack != *i)
				break;
			haystack++;
		}
		if ('\0' == *haystack)
			return (haystack - (i - needle));
	}
	return ('\0');
}
