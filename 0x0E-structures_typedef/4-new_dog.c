#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: the owner of the dog
 *
 * Return: new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
