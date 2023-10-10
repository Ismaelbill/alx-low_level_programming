#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: pointer d
 */

void print_dog(struct dog *d)
{
	if (!d)
		printf("(nil)\n");
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
