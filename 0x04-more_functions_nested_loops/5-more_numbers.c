#include "holberton.h"
/**
  * more_numbers - prints 0-14
  *
  * Return: void
  */
void more_numbers(void)
{
	int i, n;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
	_putchar('\n');
	}
}
