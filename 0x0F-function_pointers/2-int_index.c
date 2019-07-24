#include "function_pointers.h"
#include <stdio.h>
/**
  * int_index - searches for an integer
  * @array: input array
  * @size: number of elements in aray
  * @cmp: pointer to search function
  * Return: index of int if found, -1 otherwize
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int loop, check;

	if (size <= 0)
		return (-1);

	for (loop = 0; loop < size; loop++)
	{
		check = cmp(array[loop]);
		if (check != 0)
			return (loop);
	}
	return (-1);
}

