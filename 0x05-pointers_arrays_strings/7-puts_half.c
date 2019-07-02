#include "holberton.h"
/**
  * puts_half - prints half of a string
  *
  * @str: input string
  *
  * Return: void
  */
void puts_half(char *str)
{
	int count = 0, half, i;

	while (str[count] != '\0')
	{
		count++;
	}

	if (count % 2 == 0)
	{
		half = count / 2;
	}
	else
	{
		half = (count - 1) / 2;
	}

	for (i = 0; i <= count; i++)
	{
		if (i >= half)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
