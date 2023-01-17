#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new datatype for dog
 *@name: anem of dog
 *@age: the age of the dog
 *@owner: The owner of the dog
 *
 * Return: Always 0
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
