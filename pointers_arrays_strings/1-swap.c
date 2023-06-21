#include "main.h"

/**
 * swap_int - uptdates the value the pointer points at to 98
 *
 *Return: always 0
 */

void swap_int(int *a, int *b)
{
	int a2 = *a;
	int b2 = *b;

	*a = b2;
	*b = a2;
}
