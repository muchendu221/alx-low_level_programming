#include <stdio.h>

/**
 * main - storing the address of the variable to a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("Address of 'n'; %p\n", &n);
	printf("Value pf 'p': %p\n", p);
	return (0);
}
