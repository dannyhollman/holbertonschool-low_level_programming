#include "function_pointers.h"
#include <stdio.h>
/**
  *
  *
  *
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int loop;

	for (loop = 0; loop < size; loop++)
		action(array[loop]);
}
