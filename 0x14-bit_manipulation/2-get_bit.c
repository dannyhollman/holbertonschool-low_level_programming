#include "holberton.h"
/**
 * get_bit - returns value of bit at index
 * @n: input number
 * @index: index of bit
 * Return: bit value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index ) & 1);
}
