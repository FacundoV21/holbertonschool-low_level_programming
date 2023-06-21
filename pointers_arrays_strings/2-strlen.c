#include "main.h"

/**
 * _strlen - returns le lenght of a string
 * @s: String input
 *Return: the lenght of the str
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
