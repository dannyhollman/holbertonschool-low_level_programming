#include "holberton.h"
/**
 * print_binary - prints binary representation of number
 * @n: input number
 */
void print_binary(unsigned long int n)
{
	int count = 0, temp = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (temp)
	{
		count++;
		temp >>= 1;
	}

	count--;

	while (count >= 0)
	{
		temp = n >> count;

		if (temp & 1)
			_putchar('1');
		else
			_putchar('0');
		count--;
	}
}


