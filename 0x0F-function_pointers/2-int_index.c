#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -  returns the index of the first element
 * for which the cmp function does not return 0
 * @array: array check.
 * @size: number of elements in the array.
 * @cmp: pointer to the function to be used to compare values
 * Return: 0 if false and -1 if no match.
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i, x;

	if (array && size > 0 && cmp)
	{
		x = 0;
		for (i = 0; i < size; i++)
		{
			x = cmp(array[i]);
			if (x == 1)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
