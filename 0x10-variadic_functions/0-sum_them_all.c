#include "variadic_functions.h"

/**
 * sum_them_all - sum all numbers.
 * @n: input number.
 * Return: Always 0.
 */

int main()
{
	int sum_them_all(const unsigned int n, ...)
	{

		va_list figs;
		int sum = 0;
		unsigned int i;

		if (n == 0)
		{
			return (0);
		}
		va_start(figs, n);
		for (i = 0; i < n; i++)
			sum += va_arg(figs, int);
		va_end(figs);
		return (sum);
	}
}
