#include "main.h"

/**
 * _print_rev_recursion - Writes a string backwards followed by a new line
 * @*s: string to write
 * @s: value of *s
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
