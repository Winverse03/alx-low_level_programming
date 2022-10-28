#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @stri: string to modify
 * Return: the resulting string
 */

char *cap_string(char *stri)
{

	int i = 0;

	while (stri[i])
	{
		while (!(stri[i] >= 'a' && stri[i] <= 'z'))
			i++;

		if (stri[i - 1] ==  ' ' || stri[i - 1] == '\t' ||
			       stri[i - 1] == '\n' ||
			       stri[i - 1] == ',' ||
			       stri[i - 1] == ';' ||
			       stri[i - 1] == '.' ||
			       stri[i - 1] == '!' ||
			       stri[i - 1] == '?' ||
			       stri[i - 1] == '"' ||
			       stri[i - 1] == '(' ||
			       stri[i - 1] == ')' ||
			       stri[i - 1] == '{' ||
			       stri[i - 1] == '}' || i == 0)
			stri[i] -= 32;
		i++;
	}
	return (stri);
}
