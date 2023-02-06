#include "main.h"
/**
 * binary_to_uint - entry point
 * @b: - pointer to the start of binary string
 * Return: The converted number or 0 if b is NULL or if there are chars tha are
 * not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	unsigned int i;
	unsigned int j;
	unsigned int sum;
	unsigned int pow;
	int base;

	base = 2;
	sum = 0;
	pow = 1;
	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++) /*Checking the length of b*/
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1')) /* checking for single numbs*/
		return ((b[0] - 48));
	for (i = 0; b[i] != '\0'; i++)/* iterating through the list*/
	{
		if (b[i] != '0' && b[1] != '1')
			return (0);
		for (j = len - 1; j > 0; j--) /*calculating the exponent*/
			pow = pow * base;
		sum = sum + (pow * (b[i] - 48));
		len--;
			pow = 1;/* reset exponent*/
	}
	return (sum);
}
