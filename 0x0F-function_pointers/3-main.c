#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - simple operations program
 * @argc: argument counter
 * @argv: argument array
 * Return: 0 mostly
 */
int main(int argc, char *argv[])
{
	int num1, num2, optn;
	int (*funct)(int, int);
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	funct = get_op_func(op);
	if (funct == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && num2 == 0) ||
	    (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	optn = funct(num1, num2);
	printf("%d\n", optn);
	return (0);
}
