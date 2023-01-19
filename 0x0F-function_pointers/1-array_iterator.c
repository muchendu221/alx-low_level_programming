#include "function_pointers.h"

/**
 * array_iterator - entry point
 * @size: size of array
 * @action: function call back
 * @array: array to be printed
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int x))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; ++i)
			action(array[i]);
	}
}
