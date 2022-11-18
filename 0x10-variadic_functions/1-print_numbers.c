#include "variadic_functions.h"

/**
 * print_numbers - print numbers.
 * @separator: The string to be printed between numbers.
 * @n: Input of number of integers passed to the function.
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list fig;
	unsigned int i;

	va_start(fig, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", (va_arg(fig, int)));
		if ((i != (n - 1)) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(fig);
}
