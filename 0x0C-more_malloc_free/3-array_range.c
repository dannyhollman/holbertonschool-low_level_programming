#include "holberton.h"
#include <stdlib.h>
/**
  * array_range - create array from min to max
  * @min: starting number
  * @max: ending number
  * Return: pointer to array
  */
int *array_range(int min, int max)
{
	int loop = 0, dif;

	int *array;

	if (min > max)
		return (NULL);

	dif = max - min;

	array = malloc(sizeof(int) * dif);

	if (array == NULL)
		return (NULL);

	while (loop < dif)
	{
		array[loop] = min;
		min++;
		loop++;
	}
	return (array);
}
