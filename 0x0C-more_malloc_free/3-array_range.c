#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value in range.
 * @max: maximum value in range.
 * Return: If min > max, return NULL, If malloc fails, return NULL,
 * pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i = 0;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (; i < size; i++)
		arr[i] = min++;
	return (arr);
}
