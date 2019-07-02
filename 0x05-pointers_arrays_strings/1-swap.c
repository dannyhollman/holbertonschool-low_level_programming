#include "holberton.h"
/**
  * swap_int - swaps the value of two pointers
  *
  * @a: intput 1
  *
  * @b: input 2
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
