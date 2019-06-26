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
	r %= 10;
	if (r < 0)
	{
		r *= (-1);
	}
	_putchar((r) + '0');
	return (r);
}

