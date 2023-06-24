#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the summatory of the diaggonals in a squeare array
 * @*a: array pinter input
 * @a: value of *a
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int c, v1 = 0, v2 = 0;

	for (c = 0; c <= (size * size); c = c + size + 1)
	{
		v1 = v1 + a[c];
	}

	for (c = size - 1; c <= (size * size) - size; c = c + size - 1)
	{
		v2 = v2 + a[c];
	}

	printf("%d, %d\n", v1, v2);
}
