#include "holberton.h"
#include <stdio.h>
/**
  * print_number - prints integer
  *
  * @n: input number
  *
  * Return: void
  */
void print_number(int n)
{
	int count = 1, divide = 1, copy = n;

	if (n < 0 && n > -2147483648)
	{
		copy *= -1;
		_putchar('-');
	}
	if (n == -2147483648)
	{
		copy -= -1;
		copy *= -1;
		_putchar('-');
	}

	while (divide <= copy / 10)
	{
		count++;
		divide *= 10;
	}
	while (count > 0)
	{
		if (n == -2147483648 && divide == 1)
			copy += 1;
		_putchar((copy / divide) + '0');
		copy %= divide;
		divide /= 10;
		count--;
	}
}
