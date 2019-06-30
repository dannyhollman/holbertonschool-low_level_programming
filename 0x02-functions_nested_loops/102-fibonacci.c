#include <stdio.h>
/**
  * main - print first 50 fibonacci
  *
  * Return: always 0
  */
int main(void)
{
	long int i, first = 0, second = 1, next = first + second;

	for (i = 0; i < 50; i++)
	{
		printf("%ld", next);
		if (i != 49)
		{
			printf(", ");
		}
		first = second;
		second = next;
		next = first + second;
	}
	putchar('\n');
	return (0);
}
