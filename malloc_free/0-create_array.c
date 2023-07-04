#include <stdlib.h>
#include "main.h"


/**
 * create_array - Creates an array of (size )size and fills it with the char
 * c
 * @size: the size of the array
 * @c: the char to fill it with
 * Return: the pointer to the array or null
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}
