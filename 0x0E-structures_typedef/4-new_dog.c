#include "dog.h"

/**
 * new_dog - function that creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: NULL if the function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	my_dog = (dog_t *)malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	strcpy(my_dog->name, name);
	my_dog->age = age;
	strcpy(my_dog->owner, owner);
	return (my_dog);
}
