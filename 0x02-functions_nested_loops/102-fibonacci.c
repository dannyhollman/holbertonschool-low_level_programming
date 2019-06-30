#include <stdio.h>
/**
  *
  *
  *
  */
int main(void)
{
	int i, first = 0, second = 1, next = first + second;

	for (i = 0; i < 50; i++)
	{
		printf("%d", next);
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
