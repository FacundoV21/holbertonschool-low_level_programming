#include "main.h"

/**
 * _strncpy - copies a string into another
 * @*dest: destination input
 * @*src: source input
 * @dest: array where you put chars
 * @src: array where you get your chars from
 * @n: amounts of char being set to dest
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

