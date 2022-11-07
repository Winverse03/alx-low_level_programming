#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{

	int n, a, result;
	int coins[] = {75, 25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	result = 0;
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (a = 0; a < 6 && n >= 0; a++)
	{
		while (n >= coins[a])
		{
			result++;
			n -= coins[a];
		}
	}
	printf("%d\n", result);
	return (0);
}
