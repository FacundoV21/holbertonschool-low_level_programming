#include "main.h"

/**
 * print_line - Prints a n long line
 * @n: line lenght
 */
void print_line(int n)
{
	int c;

	for (c = 1; c <= n; c++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
