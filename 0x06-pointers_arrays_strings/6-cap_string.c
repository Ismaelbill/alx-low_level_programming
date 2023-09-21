#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @str: points to the string
 *
 * Return: capitalized string ('str')
*/

char *cap_string(char *str)
{
	int i, j;
	char arr[] = {',', ' ', '\n', '\t', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if ((str[i] == arr[j] && ((int)str[i + 1] >= 97 && (int)str[i + 1] <= 122)))
			{
				str[i + 1] = (char)(int)str[i + 1] - 32;
			}
		}
	}
	return (str);
}
