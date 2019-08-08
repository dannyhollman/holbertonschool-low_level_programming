#include "holberton.h"
/**
 * to_binary - converts decimal to binary
 * @n: input number
 */
void to_binary(unsigned long int n)
{
	if (!n)
		return;
	to_binary(n / 2);
	_putchar(n % 2 + '0');
}
/**
 * print_binary - prints binary representation of number
 * @n: input number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	to_binary(n);
}


