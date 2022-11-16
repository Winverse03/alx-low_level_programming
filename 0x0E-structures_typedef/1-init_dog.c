#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Create a Dog.
 * @x: name of struct
 * @name: Name of Dog.
 * @age: Age of Dog.
 * @owner: owner of Dog.
 * Return: Always 0.
 */

int main(void)
{
	void init_dog(struct dog *n, char *name, float age, char *owner)
	{
		if (n)
		{
			n->name = name;
			n->age = age;
			n->owner = owner;
		}
		else
		{
			return;
		}
	}
}
