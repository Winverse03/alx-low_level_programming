#include "3-calc.h"
#include <stdlib.h>

/**
 * *get_op_func - returns a pointer to the function 
 * that corresponds to the operator given as a parameter. 
 *  @s: is an operator
 *  Return: a pointer to the function op_add, else NULL if no match exist.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	
	i = 0;
	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
