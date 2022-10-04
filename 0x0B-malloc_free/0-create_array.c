#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: size of the array to be created.
 * @c: character to be inserted in the array.
 * Return: NULL if size = 0, pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index = 0;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (index < size)
	{
		array[index] = c;
		index++;
	}
	return (array);
}
