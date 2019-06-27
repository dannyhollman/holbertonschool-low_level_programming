#include "holberton.h"
/**
  *
  *
  *
  *
  */
void print_number(int n)
{
	if (n < 0)
	{	_putchar('-'); }
	if ((n < 9 && n >= 0) || (n < 0 && n > -9))
	{	if (n < 0)
		{	n *= -1; }
		_putchar((n) + '0'); }
	else if ((n > 9 && n  < 100) || (n < -9 && n > -100))
	{	if (n < 0)
		{	n *= -1; }
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0'); }
	else if ((n > 99 && n  < 1000) || (n < -99 && n > -1000))
	{	if (n < 0)
		{	n *= -1; }
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0'); }
	else if ((n > 999 && n  < 10000) || (n < -999 && n > -10000))
	{	if (n < 0)
		{	n *= -1; }
		_putchar((n / 1000) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0'); }
	else if ((n > 9999 && n < 100000) || (n < -9999 && n > -100000))
	{	if (n < 0)
		{	n *= -1; }
		_putchar((n / 10000) + '0');
		_putchar(((n / 1000) % 10) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0'); }	
}
