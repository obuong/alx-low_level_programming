#include "main.h"
#include <stdio.h>
/**
 * main - prints prints all arguments it receives
 * , followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
