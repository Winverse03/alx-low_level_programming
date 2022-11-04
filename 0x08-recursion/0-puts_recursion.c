#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: the pointer input
 */

void _puts_recursion(char *s)
{

	*s == '\0'
	_putchar('\n');
	_putchar(*s);
	_puts_recursion(++s);
}
