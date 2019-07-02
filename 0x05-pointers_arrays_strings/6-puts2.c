#include "holberton.h"
/**
  * puts2 - prints one out of 2 of a string
  *
  * @str: input string
  *
  * Return: void
  */
void puts2(char *str)
{
	int i, size = 0;

	while (str[size] != '\0')
	{
		size++;
	}

	for (i = 0; i < size; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
