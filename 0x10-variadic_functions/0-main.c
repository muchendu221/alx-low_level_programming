#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - entry
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int sum;

	sum = sum_them_all(16, 7);
	printf("%d\n", sum);
	return (0);
}
