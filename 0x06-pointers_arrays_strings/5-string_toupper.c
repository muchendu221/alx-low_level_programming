#include "main.h"
/**
 *string_toupper - change lower case to upper case
 *@s: string to be changed to uppper
 *Return: Char
 *
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
