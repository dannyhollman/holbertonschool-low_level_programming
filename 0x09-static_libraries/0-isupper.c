#include "holberton.h"
/**
  * _isupper - Checks for uppercase character
  *
  * @c: character to check
  *
  * Return: 1 if uppper, 0 otherwise
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
