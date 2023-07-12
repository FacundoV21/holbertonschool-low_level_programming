#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Write a function that searchs for an integer.
 * @array: Array of integers.
 * @size: Size of the array.
 * @cmp: Function that compares two integers.
 * Return: if size <= 0/no element mathes return -1, else return the index of
 * the first element for which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	while (i < size && cmp(array[i]) == 0)
		i++;

	if (i == size)
		return (-1);

	return (i);
}
