#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @*haystack: string to search inside
 * @*needle: string to look for
 * @haystack: value of *haystack
 * @needle: value of *needle
 * Return: pointer to the string or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	char *a = haystack, *value;

	if (needle[0] == '\0')
	{
		return (a);
	}

	while (*a != '\0')
	{
		i = 0;

		if (*a == needle[i])
		{
			value = a;
			while (*a == needle[i] && needle[i] != '\0')
			{
				a++;
				i++;
			}
			if (needle[i] == '\0')
			{
				return (value);
			}
		}
		a++;
	}
	return (NULL);
}
