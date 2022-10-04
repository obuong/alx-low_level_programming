#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array or NULL if it fails
 */
char *create_array(unasigned int size, char c)
{
	char *str;
	unasigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
