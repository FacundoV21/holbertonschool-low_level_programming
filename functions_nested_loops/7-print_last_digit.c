#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @c: imput from other program
 * Return: the current value of l
 */

int print_last_digit(int c)
{
	int l;

	l = c % 10;
	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}
