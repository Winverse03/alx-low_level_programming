#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */

void print_diagsums(int *a, int size)
{

	int in, s1 = 0, s2 = 0;

	for (in = 0; in < size; in++)
	{
		s1 += a[in];
		a += size;
	}
	a -= size;
	for (in = 0; in < size; in++)
	{
		s2 += a[index];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
