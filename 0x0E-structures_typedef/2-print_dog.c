#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Print a cute Dog.
 * @n: n.
 *
 * Return: Always 0.
 */
void print_dog(struct dog *n)
{

	if (n != NULL)
	{
		if (n->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", n->name);
		printf("Age: %f\n", n->age);
		if (n->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", n->owner);
	}
}
