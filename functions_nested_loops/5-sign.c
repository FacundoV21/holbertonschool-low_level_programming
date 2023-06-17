#include "main.h"
/**
 * print_sign - Determines if the input is negative or positive
 * @c: imput from other program
 * Return: 1 if positive, 0 if zero, -1 if negative
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
