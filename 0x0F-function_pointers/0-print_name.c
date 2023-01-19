#include "function_pointers.h"

/**
 * print_name - entry point
 * @name: Name to be printed
 * @f: pointer to function that prints name
 *
 * Return: Name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
