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

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	a = malloc(sizeof(char) * (size + 1));
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
