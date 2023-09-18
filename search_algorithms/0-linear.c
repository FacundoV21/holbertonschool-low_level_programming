#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the 
 * Linear search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of the value or -1 if failure
*/

int linear_search(int *array, size_t size, int value)
{
	int i = -1, sizei = size;

	if (!array)
		return (i);

	i++;
	printf("Value checked array[%d] = [%d]\n", i, array[i]);
	while (i < sizei && array[i] != value)
	{
		i++;
		if (i < sizei)
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}

	if (i == sizei)
		return (-1);
	return (i);
}