#include "holberton.h"
/**
  * _atoi - converts string to int
  *
  * @s: string input
  *
  * Return: converted string
  */
int _atoi(char *s)
{
	int loop, digitCount = 0, neg = 1, start = 0, multiple = 1;

	int temp, number = 0;

	for (loop = 0; s[loop] != '\0'; loop++)
	{
		if (s[loop] == '-')
			neg *= -1;
		if (s[loop] >= 48 && s[loop] <= 57)
		{
			digitCount++;
			if (digitCount > 1)
				multiple *= 10;
			if (!(s[loop + 1] >= 48 && s[loop + 1] <= 57))
				break;
		}
	}
	for (start = (loop + 1) - digitCount; start < loop + 1; start++)
	{
		temp = (s[start] - '0') * multiple;
		number += temp;
		multiple /= 10;
	}
	number *= neg;
	return (number);
}
