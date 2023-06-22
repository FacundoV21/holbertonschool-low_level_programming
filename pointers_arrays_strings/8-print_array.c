#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an array of ints
 * @*a: array input
 * @a: array
 * @n: size of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		{
			break;
		}
		printf(", ");
	}
	printf("\n");
}
