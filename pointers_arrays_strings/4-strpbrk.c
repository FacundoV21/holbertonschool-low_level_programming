#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searhes for a set of bytes in a string
 * @*s: string input
 * @s: value of *s
 * @*accept: input value to search
 * @accept: value of *accept
 * Return: pointer to string
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	char *a = s;

	while (*a != '\0')
	{
		i = 0;
		while (accept[i] != '\0' && *a != accept[i])
		{
			i++;
		}
		if (*a == accept[i])
		{
			return (a);
		}
		a++;
	}
	a = NULL;
	return (a);
}
