#include <stdarg.h>
#include <stdio.h>
/**
  *
  *
  *
  */
void print_all(const char * const format, ...)
{
	int i = 0, onoff = 0;

	va_list valist;

	va_start(valist, format);

	while (format[i] != '\0')
	{
		if (onoff == 0 && i != 0)
			printf(", ");
		onoff = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%i", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				printf("%s", va_arg(valist, char *));
				break;
			default:
				onoff = 1;
				break;
		}
	i++;
	}

	va_end(valist);

	printf("\n");
}
