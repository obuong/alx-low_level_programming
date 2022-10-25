#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to the list
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}

}
