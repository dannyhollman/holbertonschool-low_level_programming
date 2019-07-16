#include "holberton.h"
#include <stdlib.h>
/**
  * alloc_grid - creates 2d array of integers
  * @width: width of array
  * @height: height of array
  * Return: piinter to 2d array
  */
int **alloc_grid(int width, int height)
{
	int **array, loop;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(height * sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
	}

	for (loop = 0; loop < width; loop++)
	{
		array[loop] = malloc(width * sizeof(int));
		if (array[loop] == NULL)
		{
			return (NULL);
		}
	}

	return (array);
}
