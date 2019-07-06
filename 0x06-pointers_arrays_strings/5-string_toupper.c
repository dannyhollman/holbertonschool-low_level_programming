#include "holberton.h"
/**
  * string_toupper - changes string to uppercase
  *
  * @s: input string
  *
  * Return: pointer to uppercase string
  */
char *string_toupper(char *s)
{
	int count = 0, loop;

	while (*(s + count) != '\0')
	{
		count++;
	}

	count -= 1;

	for (loop = 0; loop < count; loop++)
	{
		if (*(s + loop) >= 97 && *(s + loop) <= 122)
		{
			*(s + loop) = *(s + loop) - 32;
		}
	}
	return (s);
}
