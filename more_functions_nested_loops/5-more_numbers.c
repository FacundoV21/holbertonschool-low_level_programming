#include "main.h"

/**
 * more_numbers - Prints nums from 0 to 9
 */
void more_numbers(void)
{
	int ca, cb, d, u;

	for (ca = 0; ca <= 9; ca++)
	{
		for (cb = 0; cb <= 14; cb++)
		{
			u = cb % 10;
			d = (cb - u) / 10;

			if (cb > 9)
			{
				_putchar(d + '0');
			}
			_putchar(u + '0');
		}
		_putchar('\n');
	}
}
