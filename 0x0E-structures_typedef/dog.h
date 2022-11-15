#include <stdlib.h>
#ifndef DOG_H
#define DOG_H

/**
 * struct dog - create dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 * Return: 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
int main(void)
{
	struct dog dog;

	dog.name = "Bingo"
	dog.age = "3 months"
	dog.owner = "Paul"
	return (0);
}
#endif
