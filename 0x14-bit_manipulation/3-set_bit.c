#include "holberton.h"
#include <stdio.h>

/**
 * set_bit - sets bit at index to 1
 * @n: input number
 * @index: index to set
 * Return: 1 if it worked
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n |= 1 << index;

	return (1);
}
