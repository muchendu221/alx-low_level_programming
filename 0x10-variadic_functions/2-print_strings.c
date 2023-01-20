#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings with separator, followed by a new line
 * @separator: the string separator
 * @n: number of strings provided
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *p_ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		p_ap = va_arg(ap, char *);
		if (p_ap == NULL)
			p_ap = "nil";
		printf("%s", p_ap);
		if (separator != NULL)
			if (i < n - 1)
				printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
