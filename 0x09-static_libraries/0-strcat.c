#include "main.h"

/**
 *_strcat - concantenate 2 strings
 *@dest: first string, and final string
 *@src: second string
 *Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')

	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
