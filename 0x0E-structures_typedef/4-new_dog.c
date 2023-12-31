#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * length - function returns the length of the string
 * @s: string
 * Return: returns length
 */
int length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * new_dog - function that creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: returns the object, otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *ne_dog;

	if (name == NULL || age < 0 || owner == NULL)
		exit(1);

	ne_dog = malloc(sizeof(*ne_dog));

	if (ne_dog == NULL)
	{
		return (NULL);
	}

	ne_dog->name = malloc(sizeof(char) * length(name) + 1);

	if (ne_dog->name == NULL)
	{
		free(ne_dog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		ne_dog->name[i] = name[i];
	ne_dog->name[i] = '\0';

	ne_dog->age = age;

	ne_dog->owner = malloc(sizeof(char) * length(owner) + 1);

	if (ne_dog->owner == NULL)
	{
		free(ne_dog->name);
		free(ne_dog);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		ne_dog->owner[i] = owner[i];
	ne_dog->owner[i] = '\0';

	return (ne_dog);
}
