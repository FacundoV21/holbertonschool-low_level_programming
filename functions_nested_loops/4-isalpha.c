#include "main.h"
/**
 * _isalpha - Determines if an imput is a  letter
 * @c: imput from other program
 * Return: 1 if letter else 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
