#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: pointer to a linked list
 * Return: number of nodes in list
 */

size_t print_list(const list_t *h)
{
	unsigned long int node = 0;
	const list_t *ptf;

	ptf = h;
	while (ptf != NULL)
	{
		node++;
		if (ptf->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", ptf->len, ptf->str);
		}
		ptf = ptf->next;
	}
	return (node);
}
