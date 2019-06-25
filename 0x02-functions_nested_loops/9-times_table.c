#include "holberton.h"
/**
  * times_table - prints 0-9 times table
  *
  * Return: void
  */
void times_table(void)
{
	int i;

	int n;

	int x;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			x = i * n;
			if (x > 9)
			{
				if (n != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			}
			else
			{
				if (n != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			_putchar((x) + '0');
			}
		}
	_putchar('\n');
	}
}
