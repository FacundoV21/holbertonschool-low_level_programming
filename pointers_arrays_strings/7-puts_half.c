#include "main.h"

/**
 * puts_half - prints half a string
 * @str: String input
 *Return: always 0
 */

void puts_half(char *str)
{
	int n, i, c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	if (c % 2 != 0)
	{
		n = (c - 1) / 2;
	}
	else
	{
		n = c / 2;
	}
	for (i = 0; i < c; i++)
	{
		if (i >= n)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
