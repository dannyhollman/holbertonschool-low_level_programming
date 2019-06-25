#include "holberton.h"
/**
  * _abs - returns absolute value of int
  *
  * @i: input number
  *
  * Return: absolute value
  */
int _abs(int i)
{
	int n;

	if (i < 0)
	{
		n = (i *= (-1));
	}
	else
	{
		n = i;
	}
	return (n);
}
