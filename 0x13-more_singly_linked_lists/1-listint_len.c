#include "lists.h"
/**
 * listint_len - Returna the number of the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of elements in the list_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
