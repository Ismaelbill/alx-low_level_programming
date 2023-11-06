#include "dog.h"
#include <stdlib.h>

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

	dog_t *ne_dog = malloc(sizeof(dog_t));

	if (ne_dog == NULL || !(name) || !(owner) || age < 0)
		return (NULL);

	ne_dog->name = malloc(length(name) + 1);

	if (ne_dog->name == NULL)
	{
		free(ne_dog->name);
		free(ne_dog);
		return (NULL);
	}
	for (i = 0; i < length(name); i++)
		ne_dog->name[i] = name[i];
	ne_dog->name[i] = '\0';

	ne_dog->age = age;

	ne_dog->owner = malloc(length(owner) + 1);

	if (ne_dog->owner == NULL)
	{
		free(ne_dog->owner);
		free(ne_dog);
		return (NULL);
	}
	for (i = 0; i < length(owner); i++)
		ne_dog->owner[i] = owner[i];
	ne_dog->owner[i] = '\0';
	return (ne_dog);
}
