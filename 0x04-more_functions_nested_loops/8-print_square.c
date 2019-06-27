#include "holberton.h"
/**
  * print_square - print a square
  *
  * @size: size of square
  *
  * Return: void
  */
void print_square(int size)
{
	int first, second;

	for (first = 0; first < size; first++)
	{
		for (second = 0; second < size; second++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
