#include "main.h"
#include <stdio.h>

/**
 * main - name of the program passed into main
 * @argc: Number of command line arguments
 * @argv: Array name or arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{

	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
