#include "holberton.h"
/**
  * _isalpha - checks if input is alpha
  *
  * @c: input
  *
  * Return: 1 if alpha, 0 otherwise
  */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
