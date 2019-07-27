#include <stdio.h>
#include <stdarg.h>
/**
  * sum_them_all - returns sum of all parameters
  * @n: number of parameters
  * Return: sum of all parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;

	va_list valist;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
