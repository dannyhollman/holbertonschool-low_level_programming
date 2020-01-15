#include "search_algos.h"

/**
 * linear_search - uses linear search to find value in array
 * @array: the array to search
 * @size: size of the array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
