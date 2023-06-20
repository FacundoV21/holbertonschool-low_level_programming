#include "main.h"

/**
 * print_diagonal - Prints a n long diagonal line
 * @n: line lenght
 */
void print_diagonal(int n)
{
	int c1, c2;

	if (n > 0)
	{
		for (c1 = 1; c1 <= n; c1++)
		{
			for (c2 = 1; c2 <= c1; c2++)
			{
				if (c2 != 1)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
		_putchar('\n');
}
