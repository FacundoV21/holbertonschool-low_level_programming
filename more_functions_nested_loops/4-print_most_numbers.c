#include "main.h"

/**
 * print_most_numbers - Prints nums from 0 to 9 excluding 2 and 4
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 4 && c != 2)
		_putchar(c + '0');
	}
	_putchar('\n');
}
