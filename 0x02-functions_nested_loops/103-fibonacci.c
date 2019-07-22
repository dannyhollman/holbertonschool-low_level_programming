#include <stdio.h>
/**
  * main - prints sum of even fibonacci numbers
  * Return: always 0;
  */
int main(void)
{
	long int first = 0, second = 1, next = first + second, sum = 0;

	while (next <= 4000000)
	{
		first = second;
		second = next;
		next = first + second;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%ld\n", sum);
	return (0);
}
