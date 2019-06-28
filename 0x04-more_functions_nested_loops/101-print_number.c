#include "holberton.h"
/**
  * print_number - prints number
  *
  * @n: number to print
  *
  * Return: void
  */
void print_number(int n)
{
	int divide = 1;

	int count = 1;

	/* convert if negative and print '-' */
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	/* dynamically gets digit count and number to divide by */
	while (divide <= n / 10)
	{
		count++;
		divide *= 10;
	}
	/* prints digit from left to right */
	while (count > 0)
	{
		_putchar((n / divide) + '0');
		n %= divide;
		divide /= 10;
		count--;
	}
}
