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
	char **ptr;
	int i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);

	ptr = malloc(ac * sizeof(char *));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		ptr[i] = malloc(sizeof(char) * strlen(av[i]) + 1);
		if (ptr[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(ptr[k]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[i][j] = av[i][j];
		}
		printf("%s\n", ptr[i]);
	}
	return (*ptr);
}
