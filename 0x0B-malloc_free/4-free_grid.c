#include "holberton.h"
#include <stdlib.h>
/**
  *
  *
  *
  *
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
