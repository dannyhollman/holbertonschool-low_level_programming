#include <stdio.h>
/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	int n;

	for (i = 0; i < 100; i++)
	{
		for (n = 0; n < 100; n++)
		{
			if (i < n)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

