#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new do
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 *Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	char *n;
	char *w;

	p = malloc(sizeof(dog_t));
	n = malloc(sizeof(char));
	w = malloc(sizeof(char));
	if (p == NULL)
		return (NULL);
	if (n == NULL)
	{
		/*free(p);
		  free(w);*/
		return (NULL);
	}
	if (w == NULL)
	{
		/*free(p);
		//free(n);*/
		return (NULL);
	}
	p->name = name;
	p->owner = owner;
	p->age = age;
	return (p);
}
