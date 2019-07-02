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
	int i = 0, loop;

	while (s[i] != '\0')
	{
		i++;
	}

	for (loop = i; loop >= 0; loop--)
	{
		_putchar(s[loop]);
	}
	_putchar('\n');
}
