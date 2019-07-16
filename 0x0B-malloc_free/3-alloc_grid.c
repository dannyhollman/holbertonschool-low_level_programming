#include "holberton.h"
#include <stdlib.h>
/**
  *
  *
  *
  *
  */
int **alloc_grid(int width, int height)
{
	int **array, loop;

	array = malloc(height * sizeof(int *));

	if (array == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (loop = 0; loop < width; loop++)
	{
		array[loop] = malloc(width * sizeof(int));
	}

	return (array);
}
