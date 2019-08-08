#include "holberton.h"
/**
 * clear_bit - clears a bit at index
 * @n: input number
 * @index: index to clear
 * Return: 1 if it worked
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1 << index);

	return (*n);
}
