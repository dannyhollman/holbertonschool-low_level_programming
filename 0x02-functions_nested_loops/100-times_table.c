#include "holberton.h"
/**
  * print_times_table - prints the n times table starting with 0
  *
  * @n: times table input
  *
  * Return: void
  */
void print_times_table(int n)
{
	int first;

	int second;

	int multiple;

	if (n > 0 && n <= 15)
	{
		for (first = 0; first <= n; first++)
		{
			for (second = 0; second <= n; second++)
			{
				multiple = first * second;
				if (multiple >= 100 && multiple < 1000)
				{	_putchar(',');
					_putchar(' ');
					_putchar((multiple / 100) + '0');
					_putchar(((multiple / 10) % 10) + '0');
					_putchar((multiple % 10) + '0'); }
				else if (multiple > 9 && multiple < 100)
				{	_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((multiple / 10) + '0');
					_putchar((multiple % 10) + '0');
				}
				else if (multiple < 10)
				{
					if (second != 0)
					{	_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((multiple) + '0');
				}
			}
		_putchar('\n');
		}
	}
}
