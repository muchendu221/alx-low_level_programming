#include "main.h"
/**
 * _islower - check whether an alphabet is lower case
 *@c: Single letter input
 *Return: 1 if alphabet is lower case and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
