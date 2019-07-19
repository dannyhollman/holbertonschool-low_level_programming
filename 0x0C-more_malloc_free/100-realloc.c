#include "holberton.h"
#include <stdlib.h>
/**
  * _realloc - reallocates a memory block
  * @ptr: pointer to old string
  * @old_size: old byte size
  * @new_size: new byte size
  * Return: pointer to reallocated memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int loop;

	char *mem;

	char *copy = ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size < old_size)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		for (loop = 0; loop < new_size; loop++)
			mem[loop] = copy[loop];
	}
	if (new_size > old_size)
	{
		mem = malloc(old_size + new_size);
		if (mem == NULL)
			return (NULL);
		for (loop = 0; loop < old_size; loop++)
			mem[loop] = copy[loop];
	}
	free(ptr);
	return (mem);
}

