#include "holberton.h"
/**
 * clear_bit - clears a bit at index
 * @n: input number
 * @index: index to clear
 * Return: 1 if it worked
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
