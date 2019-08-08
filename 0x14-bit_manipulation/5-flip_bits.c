#include "holberton.h"
/**
 * count_bits - counts the number of bits flipped
 * @n: input number
 * Return: number of bits flipped
 */
int count_bits(int n)
{
	int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}
/**
 * flip_bits - calls count_bits function
 * @n: input number 1
 * @m: input number 2
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_bits(n ^ m));
}
