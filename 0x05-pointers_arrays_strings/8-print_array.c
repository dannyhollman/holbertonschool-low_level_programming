#include "holberton.h"
#include <stdio.h>
/**
  * print_array - prints n elements of an array
  *
  * @a: array
  *
  * @n: size of array
  *
  * Return: void
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	putchar('\n');
}
