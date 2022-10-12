#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - Frees the dog type.
 * @d: of dog type.
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
