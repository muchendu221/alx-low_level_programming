#include "main.h"

/**
 * swap_int -  swaps two number given the pointers
 *@a: number to swapped
 *@b: pointert of number to be swapped
 * Return 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
