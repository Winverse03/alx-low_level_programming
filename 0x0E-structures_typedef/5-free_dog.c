#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free dogs
 * @n: name.
 * Return: Always 0.
 */

void free_dog(dog_t *n)
{

	if (n != NULL)
	{
		free(n->name);
		free(n->owner);
		free(n);
	}
}
