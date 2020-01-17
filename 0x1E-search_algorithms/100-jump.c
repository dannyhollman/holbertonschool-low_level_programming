#include "search_algos.h"

/**
 * jump_search - uses jump search to find value in array
 * @array: the array to search
 * @size: size of the array
 * @value: value to search for
 * Return: index of value, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, prev = 0;

	jump = sqrt(size);

	if (array == NULL)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

	while (jump < size)
	{
		if (array[jump] >= value)
			break;
		prev = jump;
		jump += sqrt(size);

		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, jump);

	while (prev <= jump && prev < size)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}

	return (-1);
}
