#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - new identidied dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *n;

	n = malloc(sizeof(dog_t));

	if (n == NULL)
		return (NULL);
	n->name = name;
	n->age = age;
	n->owner = owner;
	return (n);
}
