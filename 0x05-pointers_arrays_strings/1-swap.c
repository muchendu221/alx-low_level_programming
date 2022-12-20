#include "main.h"

/**
 * swap_int swaps two number given the pointers
 *
 * Return 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = * a;
	*a = *b;
	*b = temp;
}
