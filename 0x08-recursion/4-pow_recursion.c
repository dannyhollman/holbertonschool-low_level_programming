#include "holberton.h"
/**
  * _pow_recursion - returns x raised to power of y
  * @x: starting int
  * @y: power to raise to
  * Return: x to the power of y
  */
int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y == 0)
		return (1);
	else
		return (-1);
}
