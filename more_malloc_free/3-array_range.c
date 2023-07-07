#include <stdlib.h>
#include "main.h"

/**
 * array_range - allocate memory for an array and fill it with the numbers
 * from min to max
 * @min: first number of elements
 * @max: last number of elements
 * Return: pointer or NULL
 */

int *array_range(int min, int max)
{
	int *a, i, j, size = 0;

	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		size++;
	}
	a = malloc(sizeof(int) * size);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = min, j = 0; i <= max; i++, j++)
	{
		a[j] = i;
	}
	return (a);
}
