#include "holberton.h"
/**
  * leet - encodes string in 1337
  *
  * @s: input string
  *
  * Return: pointer to encoded string
  */
char *leet(char *s)
{
	int count = 0, count2 = 0;

	char swap1[] = "aAeEoOtTlL";

	char swap2[] = "4433007711";

	while (*(s + count) != '\0')
	{
		while (swap1[count2] != '\0')
		{
			if (*(s + count) == swap1[count2])
			{
				*(s + count) = swap2[count2];
			}
			count2++;
		}
		count2 = 0;
		count++;
	}
	return (s);
}
