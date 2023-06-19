#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints every number between n and 98
 *
 * @n: number imput
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%i\n", n);
			}
			else
			{
				printf("%i, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%i\n", n);
			}
			else
			{
				printf("%i, ", n);
			}
		}
	}
}
