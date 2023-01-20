#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all args
 * @n: gives type of args to expect
 *
 * Return: int or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	sum = 0;
	va_start(ap, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
