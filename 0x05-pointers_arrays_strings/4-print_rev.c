#include "holberton.h"
/**
  * print_rev - print string in reverse
  *
  * @s: string input
  *
  * Return: void
  */
void print_rev(char *s)
{
	int count = 0, loop;

	while (s[count] != '\0')
	{
		count++;
	}

	count -= 1;

	for (loop = count; loop >= 0; loop--)
	{
		_putchar(s[loop]);
	}
	_putchar('\n');
}
