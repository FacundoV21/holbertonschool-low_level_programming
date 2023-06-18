#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * n - numero
 * m - multiplicador
 * r - resultado
 * d - decimales, en caso de ser un numero de dos cifras hay que separarlo
 * u - unidades, ""
 * Return: empty output
 */
void times_table(void)
{
	int n, m, r, d, u;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			r = n * m;
			if (r > 9)
			{
				u = r % 10;
				d = (r - u) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (m != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(r + '0');
			}
		}
		_putchar('\n');
	}
}
