#include "main.h"

/**
 *_strncpy - function that copies string
 *
 *@src: source of the string
 *@dest: Destination of the string
 *@n: length of int
 *
 *Return: pointer to the resulting string destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
