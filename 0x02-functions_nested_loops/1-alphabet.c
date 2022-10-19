#include "main.h"

/**
 * print_alphabet - this prints lowercase alphabets
 * followed by a new line
 */

void print_alphabet(void)
{
	char ch;
	
	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
