#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Write a function that initializes a variable of type struct dog.
 * @d: Struct to be initialized
 * @name: Name of the dog
 * @age: Age "          "
 * @owner: Owner "      "
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age  = age;
		d->owner = owner;
	}
}
