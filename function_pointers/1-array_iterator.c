#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - Executes a function on each array
 * @array: Array of integers
 * @size: Size of the array
 * @action: Function to be executed
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
