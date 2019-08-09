#include "holberton.h"
/**
 * flip_bits - calls count_bits function
 * @n: input number 1
 * @m: input number 2
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int temp = n ^ m, count = 0;

	while (temp)
	{
		count += temp & 1;
		temp >>= 1;
	}
	return (count);
}
