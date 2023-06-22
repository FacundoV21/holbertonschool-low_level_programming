#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @*dest: destination input
 * @*src: source input
 * @dest: array where you put chars
 * @src: array where you get your chars from
 * @n: amounts of char being set to dest
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[c] = src[i];
		c++;
	}
	return (dest);
}

