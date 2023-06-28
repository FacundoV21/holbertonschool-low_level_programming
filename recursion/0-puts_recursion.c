#include "main.h"

/**
 * _puts_recursion - Writes a string followed by a new line
 * @*s: string to write
 * @s: value of *s
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else if (*s == '\0')
	{
		_putchar('\n');
	}
}
