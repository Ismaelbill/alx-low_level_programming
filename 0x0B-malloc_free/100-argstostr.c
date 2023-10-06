#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: the length of av
 * @av: array
 * Return: Returns a pointer to a new string, or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	char *concatenateChar;

	int i, totalLength = 0, j, cnt = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		totalLength += strlen(av[i]);

	totalLength += ac - 1;
	concatenateChar = (char *)malloc((totalLength + 1) * sizeof(char));

	if (concatenateChar == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cnt++)
			concatenateChar[cnt] = av[i][j];

		concatenateChar[cnt] = '\n';
		cnt++;
	}

	return (concatenateChar);
}
