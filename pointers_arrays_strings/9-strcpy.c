#include "main.h"

/**
 * _strcpy - copies the content of a string to another
 * @*dest: destination input
 * @*src: source input
 * @dest: array where you put chars
 * @src: array where you get your chars from
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
