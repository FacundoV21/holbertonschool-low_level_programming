#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @*s1: first input
 * @*s2: second input
 * @s1: first array pointing
 * @s2: second array pointing
 * Return: the diference between strings.
 */

int _strcmp(char *s1, char *s2)
{
	int i, v1 = 0, v2 = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			v1 = s1[i];
			v2 = s2[i];
			return (v1 - v2);
		}
	}
	return (v1 - v2);
}

