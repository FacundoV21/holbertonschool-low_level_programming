#include "main.h"

/**
 * _memcpy - copies part of a string to another
 * @*src: source string input
 * @*dest: destination string input
 * @src: value of *src
 * @dest: value of *dest
 * @n: number of bytes to edit
 * Return: pointer to string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
