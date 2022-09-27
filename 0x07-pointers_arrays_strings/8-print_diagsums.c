#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: the matrix.
 * @size: size of of the matrix.
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;
	int max = size * size;

	for (; i < max; i += size + 1)
	{
		sum1 += a[i];
	}
	for (i = size - 1; i < max - 1; i += size - 1)
	{
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
