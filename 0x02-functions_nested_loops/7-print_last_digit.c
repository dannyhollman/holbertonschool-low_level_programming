#include "holberton.h"
/**
  * print_last_digit - prints last digit of int
  *
  * @r: intput number
  *
  * Return: value of last digit
  */
int print_last_digit(int r)
{
	int i;

	if (r >= 0)
	{
		_putchar((r % 10) + '0');
		return (r % 10);
	}
	else if (r < 0)
	{
		i = (r *= (-1));
		_putchar((i % 10) + '0');
		return (i % 10);
	}
	return (1);
}

