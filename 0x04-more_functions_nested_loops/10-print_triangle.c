#include "holberton.h"
/**
  * print_triangle - print triangle pattern
  *
  * @size: size of triangle
  *
  * Return: void
  */
void print_triangle(int size)
{
	int col, row;

	int place = size - 1;

	if (size > 0)
	{
		for (col = 0; col < size; col++)
		{
			for (row = 0; row < size; row++)
			{
				if (row < place)
				{
					_putchar(' ');
				}
				else if (row >= place)
				{
					_putchar('#');
				}
			}
		place--;
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
