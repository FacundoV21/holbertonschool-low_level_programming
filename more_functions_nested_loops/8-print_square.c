#include "main.h"

/**
 * print_square - Prints a n big square
 * @n: square size
 */
void print_square(int n)
{
	int c1, c2;

	if (n > 0)
	{
		for (c1 = 1; c1 <= n; c1++)
		{
			for (c2 = 1; c2 <= n; c2++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
