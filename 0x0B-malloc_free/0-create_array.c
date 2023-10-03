#include "main.h"

/**
 * create_array - function that creates an array of chars,
 *  and initializes it with a specific char.
 * @size: size of array
 * @c: character
 * Return: Returns a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *charArr = malloc(size * sizeof(char));

	if (size == 0 || charArr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		charArr[i] = c;
	return (charArr);
}
