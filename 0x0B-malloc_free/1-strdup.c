#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory*
 * containing a copy of the string given as parameter.
 * @str: The string to be copied.
 * Return: If str == NULL or insufficient memory is available - NULL.
 * Otherwise return- a pointer to the duplicated string.
 */

char *_strdup(char *str)
{

	char *dupstr;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	dupstr = (char *) malloc(sizeof(char) * (i + 1));
	if (dupstr == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		dupstr[j] = str[j];
	return (dupstr);
}
