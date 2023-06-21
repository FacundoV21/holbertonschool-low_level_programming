#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: String input
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	count--;
	for (; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
