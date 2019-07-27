#include "stdarg.h"
#include <stdio.h>
/**
  * print_numbers - prints numbers
  * @separator: number separator
  * @n: number of inputs
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != '\0')
			printf("%s", separator);
		printf("%d", va_arg(valist, int));
	}
	printf("\n");
}
