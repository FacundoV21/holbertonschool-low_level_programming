#include "main.h"

/**
 * _isupper - Returns if the input is upper or lower case
 * @c: character input
 * Return: - 1 if uppercase, else 0
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
