#include "main.h"
#include <stdio.h>

/**
 * _strchr - copies part of a string to another
 * @*s: string input
 * @s: value of *s
 * @c: char input
 * Return: pointer to string
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	char *a = s;

	for (i = 0; s[i] != '\n'; i++)
	{
		if (*a == c)
		{
			break;
		}
		a++;
	}
	if (*a != c)
	{
		a = NULL;
	}
	return (a);
}
