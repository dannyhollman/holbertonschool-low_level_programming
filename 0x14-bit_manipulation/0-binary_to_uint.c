#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - converts string to int
 * @s: input string
 * Return: converted int
 */
int _atoi(char *s)
{
	int loop = 0, neg = 1, number = 0;

	if (s[0] == '-')
	{
		neg *= -1;
		loop++;
	}
	for (; s[loop] != '\0'; loop++)
		number = number * 10 + s[loop] - '0';
	number *= neg;
	return (number);
}
/**
 * binary_to_uint - converts binary to unisigned int
 * @b: input string
 * Return: converted number or 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, last, base = 1, decimal = 0, count = 0;

	char *temp = (char *) b;

	if (b == NULL)
		return (0);

	while (*temp)
	{
		if (*temp != '1' && *temp != '0')
			return (0);
		count++;
		temp++;
	}

	if ((count - 1) > 31)
		return (0);

	num = _atoi((char *)b);

	while (num)
	{
		last = num % 10;
		num /= 10;
		decimal += last * base;
		base *= 2;
	}

	return (decimal);
}

