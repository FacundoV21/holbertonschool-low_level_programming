#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an array of ints
 * @*a: array input
 * @n: size of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i == n)
		{
			break;
		}
		printf(", ");
	}
	printf("\n");
}
