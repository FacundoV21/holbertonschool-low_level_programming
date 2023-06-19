#include "main.h"

/**
 * _isdigit - Returns if the input is digit or not
 * @c: character input
 * Return: - 1 if digit, else 0
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
