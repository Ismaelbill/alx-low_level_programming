#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @str: the string to encode
 *
 * Return: 'str' encoded
*/

char *leet(char *str)
{
	char alpha[] = "aAeEoOtTlL";
	char nums[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = nums[j];
			}
		}
	}
	return (str);
}
