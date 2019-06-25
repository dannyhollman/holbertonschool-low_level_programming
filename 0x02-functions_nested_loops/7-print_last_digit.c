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
	_putchar((r % 10) + '0');
	return ((r % 10) + '0');
}

