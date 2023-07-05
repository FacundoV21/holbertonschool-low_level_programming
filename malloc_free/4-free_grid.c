#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees an array previously created
 * @height: the height of the array
 * @**grid: the pointer to the array
 * @grid: value of **grid
 * Return: always 0
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
	for (i = 0; i <= height; i++)
	{
		free(grid[i]);
	}
	free(grid);
	}
}
