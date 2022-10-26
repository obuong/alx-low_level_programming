#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a certain index
 * @head: linked list pointer
 * @idx: the index to insert
 * @n: data for the new node
 * Return: NULL or address to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t  *node = malloc(sizeof(listint_t)),
		*next = head != NULL ? *head : NULL, *prev = NULL;

	if (node == NULL || head == NULL)
		return (free(node), NULL);
	node->n = n;
	for (; next != NULL && idx; --idx)
		prev = next, next = next->next;
	if (idx != 0)
		return (free(node), NULL);
	if (prev == NULL)
		*head = node, node->next = next;
	else
		prev->next = node, node->next = next;
	return (node);
}
