#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 * of a string to uppercase.
 * @stri: The string to be changed.
 * Return: A pointer to the changed string.
 */

char *string_toupper(char *stri)
{

	int in = 0;

	while (stri[in])
	{
		if (stri[in] >= 'a' && stri[in] <= 'z')
			stri[in] -= 32;
		in++;
	}
	return (stri);
}
