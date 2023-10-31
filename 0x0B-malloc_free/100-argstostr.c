#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: size of 'av'
 * @av: pointer points to pointer
 * Return: returns NULL if it fails, otherwise
 * pointer to a new string
 */


char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		k += strlen(av[i]) + 1;
	}
	ptr = malloc(sizeof(char) * k);
	if (ptr == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
