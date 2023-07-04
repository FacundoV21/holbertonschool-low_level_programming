#include <stdlib.h>
#include "main.h"


/**
 * _strdup - Creates an array of chars and fills it with the str
 * @*str: the str to copy
 * @str: value of str
 * Return: the pointer to the array or null
 */

char *_strdup(char *str)
{
	char *a;
	int i, size = 0;

	while (str[size] != '\0')
	{
		size++;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
