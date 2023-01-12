#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: The parameter count
 * @argv: The parameters passed
 *
 * Description : Returns the product of two numbers passed to it, otherwise
 *returns "ERROR"
 * Return: Always 0;
 */
int main(int argc, char *argv[])
{
	int i;
	int val;

	val = 1;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			val *= atoi(argv[i]);
		}
		printf("%d\n", val);
		return (0);
	}
}
