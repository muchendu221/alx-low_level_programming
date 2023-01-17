#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Create a Dog.
 *@d: name of struct
 *@name: Name of Dog.
 *@age: Age of Dog.
 *@owner: owner of Dog.
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
	{
		return;
	}
}
