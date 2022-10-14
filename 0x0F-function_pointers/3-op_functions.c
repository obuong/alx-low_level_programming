#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * op_add - returns sum of two integers
 * @a: integer
 * @b: integer
 * Return: sum of the two
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns difference of two integers
 * @a: integer
 * @b: integer
 * Return: difference of the two
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns product of two integers
 * @a: integer
 * @b: integer
 * Return: product of the two
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns division result of two integers
 * @a: integer
 * @b: integer
 * Return: division result of the two
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns modulo result of two integers
 * @a: integer
 * @b: integer
 * Return: modulo result of the two
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
