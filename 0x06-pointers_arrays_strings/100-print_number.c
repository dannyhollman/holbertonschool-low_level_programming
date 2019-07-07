#include "holberton.h"
/**
  *
  *
  *
  */
void print_number(int n)
{
	int count = 1, divide = 1;

	while (divide <= n / 10)
	{
		count++;
		divide *= 10;
	}
	while (count > 0)
	{
		if (n < 0)
		{
			_putchar(((n / divide) * -1) + '0');
		}
		else
		{
			_putchar((n / divide) + '0');
		}
		n %= divide;
		divide /= 10;
		count--;
	}
}
