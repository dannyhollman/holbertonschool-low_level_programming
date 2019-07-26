#include <stdarg.h>
#include <stdio.h>
/**
  *
  *
  *
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf("%s", separator);
		printf("%s", va_arg(valist, char *));
	}
	printf("\n");
}
