#include "variadic_functions.h"

/**
 * print_strings -  is the string to be printed between the strings
 * @separator: separator of numbers.
 * @n: Input numbers.
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list fig;
	unsigned int i;
	char *str;

	va_start(fig, n);
	for (i = 0; i < n; i++)
	{
		str = (va_arg(fig, char *));
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if ((i != (n - 1)) && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("\n");
		va_end(fig);
	}
}
