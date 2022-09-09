#include <stdio.h>
/**
 * main - prit is the number is positive, zero or negative
 *
 * Description: using the main function
 * this prograam prints "Programming is positive, zero or negative
 * Return: 0
 */
int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

