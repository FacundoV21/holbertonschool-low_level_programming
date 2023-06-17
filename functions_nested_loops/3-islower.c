#include "main.h"
/**
 * _islower - Determines if an imput is on uper or lower case
 * @c: imput from other program
 * Return: 1 if lowercase else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
