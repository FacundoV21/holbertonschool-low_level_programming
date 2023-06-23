#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the lenght of a prefix string
 * @*s: string input
 * @s: value of *s
 * @*accept: input value to search
 * @accept: value of *accept
 * Return: pointer to string
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
		{
			j++;
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
		i++;
	}
	return (0);
}
