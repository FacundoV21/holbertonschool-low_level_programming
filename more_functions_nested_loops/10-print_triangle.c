#include "main.h"

/**
 * print_triangle - Prints a n big triangle
 * @n: triangle size
 */
void print_triangle(int n)
{
	int c1, c2, i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (c1 = n - i; c1 > 0; c1--)
			{
			_putchar(' ');
			}
			for (c2 = 0; c2 < i; c2++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
