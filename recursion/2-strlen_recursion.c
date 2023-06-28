#include "main.h"

/**
 * _strlen_recursion - Returns the lenght of a string
 * @*s: string to count
 * @s: value of *s
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	else
	{
		return (0);
	}
}
