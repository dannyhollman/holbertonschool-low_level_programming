#include "holberton.h"
#include <stdlib.h>
/**
  * free_grid - frees a 2d array
  * @grid: 2d array
  * @height: height of array
  */
void free_grid(int **grid, int height)
{
	int loop;

	for (loop = 0; loop < height; loop++)
	{
		free(grid[loop]);
	}
	free(grid);
}
