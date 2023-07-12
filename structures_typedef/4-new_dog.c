#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - Write a function that creates a new dog.
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: NULL or pointer
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *namec;
	char *ownerc;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	namec = malloc(sizeof(char) * strlen(name) + 1);

	if (namec == NULL)
	{
		free(dog);
		return (NULL);
	}
	ownerc = malloc(sizeof(char) * strlen(owner) + 1);
	if (ownerc == NULL)
	{
		free(namec);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	dog->owner = strcpy(ownerc, owner);
	dog->name = strcpy(namec, name);
	return (dog);
}
