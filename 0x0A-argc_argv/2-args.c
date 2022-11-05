#include <stdio.h>
#include "main.h"

/**
 *  main - Prints all arguments passed into main
 *  @argc: Number of command line arguments
 *  @argv: Array name
 *  Return: 0
 */

int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc;)
		printf("%s\n", argv[c]);
	c++;
	return (0);
}
