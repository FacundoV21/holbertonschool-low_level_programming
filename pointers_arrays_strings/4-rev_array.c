#include "main.h"

/**
 * reverse_array - reverts an array of ints
 * @a: int array input
 * @n: amount of ints
 */

void reverse_array(int *a, int n)
{
	int i, x, size = n;
	int *start, *end = a;

	for (i = 1; i < size; i++)
	{
		end++;
	}
	start = a;
	for (i = 0; i < size / 2; i++)
	{
		x = *end;
		*end = *start;
		*start = x;
		start++;
		end--;
	}
}
