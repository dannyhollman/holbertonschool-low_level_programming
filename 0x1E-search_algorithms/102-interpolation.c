#include "search_algos.h"

/**
 * interpolation_search - uses interpolation search to find value in array
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: index of value, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, mid, high;

	low = 0;
	high = (int) size - 1;

	if (array == NULL)
		return (-1);

	while (array[high] != array[low] && (value >= array[low]) &&
			(value <= array[high]))
	{
		mid = low + (((double)(high - low) /
				(array[high] - array[low])) *
				(value - array[low]));
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);

		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	if (value == array[low])
		return (low);
	return (-1);
}
