#include "sort.h"

void swap(int *array, int i, int j, int dir)
{
	int temp;

	if (dir == (array[i] > array[j]))
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}
}

void merge(int *array, int low, size_t size, int dir)
{
	int k, i;

	if (size > 1)
	{
		k = size / 2;
		for (i = low; i < low + k; i++)
			swap(array, i, i + k, dir);
		merge(array, low, k, dir);
		merge(array, low + k, k, dir);
	}
}

void sort(int *array, int low, size_t size, int dir)
{
	int k = size / 2;
	if (size > 1)
	{
		sort(array, low, k, 1);

		sort(array, low + k, k, 0);

		merge(array, low, size, dir);
	}
}

void bitonic_sort(int *array, size_t size)
{
	sort(array, 0, size, 1);
}
