#include "holberton.h"
#include <stdlib.h>
/**
  * create_array - crates an array of chars and initializes it with a char
  * @size: size of array
  * @c: char to initialize with
  * Return: pointer to array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int loop = 0;

	char *array = malloc(size * sizeof(char));

	while (loop < size)
	{
		array[loop] = c;
		loop++;
	}
	return (array);
}
