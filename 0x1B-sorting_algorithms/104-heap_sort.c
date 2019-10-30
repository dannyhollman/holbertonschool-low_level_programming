#include "sort.h"
/**
 * heapify - create heap
 * @array: input array
 * @size: size of array
 * @i: i
 */
void heapify(int *array, size_t size, int i)
{
	int temp, largest = i;
	int l = 2 * i + 1, r = 2 * i + 2;

	if (l < (int)size && array[l] > array[largest])
		largest = l;

	if (r < (int)size && array[r] > array[largest])
		largest = r;

	if (largest != i)
	{
		temp = array[i];
		array[i] = array[largest];
		array[largest] = temp;

		heapify(array, size, largest);
	}
}
/**
 * heap_sort - sort array using heap sort
 * @array: input array
 * @size: size of array
 */
void heap_sort(int *array, size_t size)
{
	int i, temp;

	for (i = size / 2 - 1; i >= 0; i--)
		heapify(array, size, i);

	for (i = size - 1; i >= 0; i--)
	{
		temp = array[0];
		array[0] = array[i];
		array[i] = temp;

		heapify(array, size, 0);
	}
}
