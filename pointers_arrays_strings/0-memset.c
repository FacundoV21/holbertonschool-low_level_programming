#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @*s: string input
 * @b: byte input
 * @n: number of bytes to edit
 * Return: pointer to string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	s = 0;
	return (s);
}
