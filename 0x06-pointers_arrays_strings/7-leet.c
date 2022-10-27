#include "main.h"

/**
 * leet - encodes a string in 1337
 * @stri: string to be encoded
 * Return: the resulting string;
 */

char *leet(char *stri)
{
	
	int i, j;
	char a1[] = "aAeEoOtTlL";
	char b1[] = "4433007711";

	for (i = 0; stri[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (stri[i] == a1[j])
			{
				stri[i] = b1[j];
			}
		}
	}
	return (stri);
}
