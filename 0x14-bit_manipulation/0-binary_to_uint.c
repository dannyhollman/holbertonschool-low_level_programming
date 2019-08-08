#include "holberton.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts binary to unisigned int
 * @b: input string
 * Return: converted number or 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, last, base = 1, decimal = 0;
	char *temp = (char *)b;

	if (!b)
		return (0);

	while (*temp)
	{
		if (*temp != '1' && *temp != '0')
			return (0);
		temp++;
	}

	num = atoi(b);

	while (num)
	{
		last = num % 10;
		num /= 10;
		decimal += last * base;
		base *= 2;
	}

	return (decimal);
}
