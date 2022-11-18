#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct select - create s.
 * @q: inputa symbol representing a data type.
 * @u: input  A function pointer to a function that prints
 * a data type corresponding to symbol.
 * Return: int */

typedef struct select
{

	char *q;
	void (*u)(va_list pa);
} tstruc;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
