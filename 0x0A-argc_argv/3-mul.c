#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program that prints the product of two integer arguments
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if not enough arguments passed in, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		b = 1;
		for (a = 1; a < 3; a++)
			b *= atoi(argv[a]);
		printf("%d\n", b);
	}
	return (0);
}
