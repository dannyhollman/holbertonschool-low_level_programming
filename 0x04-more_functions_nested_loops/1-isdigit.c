#include "holberton.h"
/**
  * _isdigit - check if input is digit
  *
  * @c: input to check
  *
  * Return: 1 if digit, 0 otherwise
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
