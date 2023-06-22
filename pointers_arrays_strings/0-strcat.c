#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @*dest: destination input
 * @*src: source input
 * @dest: array where you put chars
 * @src: array where you get your chars from
 * Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int c, i;

	while (dest[c] != '\0')
	{
		c++;
	}
	for (i = 0; i != '\0', i++)
	{
		dest[c] = src[i];
		c++;
	}
	return (dest);
}
