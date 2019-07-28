#include <stdarg.h>
#include <stdio.h>
/**
  * print_strings - prints strings followed by new line
  * @separator: string separator
  * @n: number of arguments
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *temp;

	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		temp = va_arg(valist, char *);
		if (i != 0 && separator != '\0')
			printf("%s", separator);
		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);
	}
	printf("\n");
}
