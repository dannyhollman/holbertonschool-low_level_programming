#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * op_add - adds two ints
  * @a: int 1
  * @b: int 2
  * Return: sum of two ints
  */
int op_add(int a, int b)
{
	return ((a) + (b));
}
/**
  * op_sub -  subtracts
  * @a: int 1
  * @b: int 2
  * Return: total after subtraction
  */
int op_sub(int a, int b)
{
	return ((a) - (b));
}
/**
  * op_mul - multiplies two ints
  * @a: int 1
  * @b: int 2
  * Return: product of two ints
  */
int op_mul(int a, int b)
{
	return ((a) * (b));
}
/**
  * op_div -  divides a number
  * @a: int 1
  * @b: int 2
  * Return: quotient
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) / (b));
}
/**
  * op_mod -  finds remainder
  * @a: int 1
  * @b: int 2
  * Return: remainder
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) % (b));
}
