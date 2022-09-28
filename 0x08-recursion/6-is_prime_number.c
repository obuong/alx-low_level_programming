#include "main.h"
int _divisible(int num, int div);
/**
 * is_prime_number - checks if a number is prime.
 * @n: number to check.
 * Return: 0 if not a prime number and
 * 1 if a prime number.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n > 1)
	{
		return (1);
	}
	return (_divisible(n, div));
}
/**
 * _divisible - checks if a number is divisible
 * and without remainder.
 * @num: number to be checked.
 * @div: dividing number.
 * Return: if it is divisible.
 */
int _divisible(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}
	if (div == num / 2)
	{
		return (1);
	}
	return (_divisible(num, div + 1));
}
