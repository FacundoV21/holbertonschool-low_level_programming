#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Creates an array and fills it with 0
 * @width: the width of the array
 * @height: the height "        "
 * Return: the pointer to the array or null
 */

int **alloc_grid(int width, int height)
{
	int i, **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			while (i >= 0)
			{
				free(a[i]);
				i--;
			}
			free(a);
		}
	}
	return (a);
}
