#include "lists.h"

/**
 * add_node - adds a node at the beginning of the list
 * @head: pointer to first node
 * @str: a string to duplicate
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *str2;
	int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	str2 = strdup(str);
	new->str = str2;
	/*ptr->len = sizeof(str2);*/
	/*add the node at the beginning*/
	new->next = *head;
	while (str[len])
		len++;
	new->len = strlen(str);
	*head = new;

	return (*head);
}
