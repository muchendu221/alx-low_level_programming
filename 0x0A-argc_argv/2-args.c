#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all the arguements passed to a function
 * @argc: The parameter count
 * @argv: The parameter array
 *
 *Description: Prints the arguement passed to a function, each on its own line
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
