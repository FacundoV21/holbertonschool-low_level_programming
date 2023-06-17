#include "main.h"
/**
 * _abs - If the number is negative turns it into positive
 * @c: imput from other program
 * Return: the current value of c
 */

int _abs(int c)
{
	if (c < 0)
	{
		c = c * -1;
	}
	return (c);
}
