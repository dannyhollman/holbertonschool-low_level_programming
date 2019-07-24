#include "function_pointers.h"
#include <stdio.h>
/**
  * array_iterator - runs each element of array through function
  * @array: input array
  * @size: number of elements in array
  * @action: function pointer
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int loop;

	for (loop = 0; loop < size; loop++)
		action(array[loop]);
}
