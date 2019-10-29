#include "sort.h"


void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int array[], int low, int high, size_t size)
{
	int i, j, temp;

	i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < array[high])
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, size);
		}
	}
	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;
	print_array(array, size);
	return (i + 1);
}

void quicksort(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		quicksort(array, low, p - 1, size);
		quicksort(array, p + 1, high, size);
	}
}

void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
}
