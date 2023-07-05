#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates 2 strings
 * @*s1: first string
 * @*s2: second string
 * @s1: value of *s1
 * @s2: value of *s2
 * @n: amount of letters to coppy from second string
 * Return: pointer to first value of new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	int i, gsize, size1 = 0;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[size1] != '\0')
	{
		size1++;
	}
	gsize = size1 + n;

	a = malloc(sizeof(char) * (gsize + 1));

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; (i < gsize) && (s2[j] != '\0'); j++, i++)
	{
		a[i] = s2[j];
	}
	a[i] = '\0';
	return (a);
}
