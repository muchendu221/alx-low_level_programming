#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints new name
 * @argc: parameter count
 * @argv: Parameter array
 * Description: A Program that prints its name
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
		}
	return (0);
}
