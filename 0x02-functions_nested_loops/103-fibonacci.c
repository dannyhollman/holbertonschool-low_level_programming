#include <stdio.h>
/**
  *
  *
  *
  */
int main(void)
{
	long int i, first = 0, second = 1, next = first + second;

	while (next < 4000000)
	{
		printf("%ld, ", next);

		first = second;
		second = next;
		next = first + second;
	}
	putchar('\n');
	return (0);
}
