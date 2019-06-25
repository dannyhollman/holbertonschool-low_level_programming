#include "holberton.h"
/**
  * jack_bauer - print every minute of the day
  *
  * Return - void
  */
void jack_bauer(void)
{
	int i;

	int n;

	for (i = 00; i < 24; i++)
	{
		for (n = 00; n < 60; n++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar('\n');
		}
	}
}
