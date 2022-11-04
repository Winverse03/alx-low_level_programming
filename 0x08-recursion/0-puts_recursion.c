#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: the pointer input
 */

void _puts_recursion(char *s)
{

	for (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
