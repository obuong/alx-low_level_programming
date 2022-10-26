#include "lists.h"
#include <stdio.h>

/**
* print_listint - prints all the elements of a listinit_t list.
* @h: A pointer to the head of the list_t list.
*
* Return: The number of nodes in the list_t list.
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h)
{
count++;
printf("%d\n", h->n);
h = h->next;
}
return (count);
}
