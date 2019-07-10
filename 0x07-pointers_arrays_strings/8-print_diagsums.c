#include "holberton.h"
#include <stdio.h>
/**
  * print_diagsums - prints the sum of two diagnals of a square matrix of ints
  * @a: input array
  * @size: size of array
  * Return: void
  */
void print_diagsums(int *a, int size)
{
	int jump = size + 1, size1 = size * size, loop, total = 0;

	int jump2 = size - 1, loop2 = size * (size - 1), total2 = 0;

	for (loop = 0; loop < size1; loop += jump)
	{
		total += a[loop];
	}
	for (; loop2 > 0; loop2 -= jump2)
	{
		total2 += a[loop2];
	}
	printf("%d, %d\n", total, total2);
}
