#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * str_concat - Creates a string and fills it with the comb of 2 strings
 * @*s1: the first str to copy
 * @*s2: the second "        "
 * @s1: value of *s1
 * @s2: value of *s2
 * Return: the pointer to the array or null
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, gsize, size1 = 0, size2 = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	gsize = size1 + size2;
	a = malloc(sizeof(char) * (gsize + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		a[i] = s2[j];
	}
	a[i] = '\0';
	return (a);
}
