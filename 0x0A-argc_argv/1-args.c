#include "main.h"
#include <stdio.h>
/**
 * main - prints number of arguments passed, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
