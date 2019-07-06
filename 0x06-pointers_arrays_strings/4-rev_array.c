#include "holberton.h"
/**
  * reverse_array - reverses the content of integers
  *
  * @a: input array
  *
  * @n: size of array
  *
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int loop = 0, temp;

	n -= 1;

	while (loop < n)
	{
		temp = *(a + loop);
		*(a + loop) = *(a + n);
		*(a + n) = temp;
		loop++;
		n--;
	}
}
