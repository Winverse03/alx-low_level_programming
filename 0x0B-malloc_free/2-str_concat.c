#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: 1st string for concatenation.
 * @s2: The string to be concatenated to s1.
 * Return: If concatenation fails - NULL.
 * else return - a pointer the newly-allocated space in memory
 * containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{

	char *ccstr;
	int i, j = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	ccstr = (char *)malloc((i + j) * sizeof(char));
	if (ccstr == NULL)
		return (NULL);
	for (l = 0; s1[l] != '\0'; l++)
		ccstr[l] = s1[l];
	for (l = 0; s2[l] != '\0'; l++)
		ccstr[l + i] = s[l];
	return (ccstr);
}
