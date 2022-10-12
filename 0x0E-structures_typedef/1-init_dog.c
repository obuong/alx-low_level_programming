#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes the dog struct.
 * @d: struct name.
 * @name: name of d.
 * @age: age of d.
 * @owner: owner of d.
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
