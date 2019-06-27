#include "holberton.h"
/**
  * print_diagonal - print pattern
  *
  * @n: number of times to print
  *
  * Return: void
  */
void print_diagonal(int n)
{
	int first;

	int second;

	for (first = 0; first < n; first++)
	{
		second = 0;
		while (second <= first)
		{
			if (second == first)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		second++;
		}
	_putchar('\n');
	}
}
