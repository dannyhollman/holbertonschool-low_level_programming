#include "holberton.h"
/**
  * times_tables - prints 0-9 times table
  *
  * Return: void
  */
void times_table(void)
{
	int i;

	int n;

	int x;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			if (n == 0)
			{
				putchar('0');
			}
			
