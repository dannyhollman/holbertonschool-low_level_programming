#include <stdio.h>
#include <stdarg.h>
/**
  *
  *
  *
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;

	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n; i ++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
