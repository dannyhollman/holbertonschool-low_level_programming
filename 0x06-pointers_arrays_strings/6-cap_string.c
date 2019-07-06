#include "holberton.h"
/**
  *
  *
  *
  *
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int is_space(char n)
{
	switch (n)
	{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			return (1);
		default:
			return (0);
	}
}


char *cap_string(char *s)
{
	int count = 0, loop, prev, current;

	while (*(s + count) != '\0')
	{
		count++;
	}

	count -= 1;

	for (loop = 0; loop < count; loop++)
	{
		prev = is_space(*(s + (loop - 1)));
		current = _islower(*(s + loop));
		if (prev == 1 && current == 1)
		{
			*(s + loop) = *(s + loop) - 32;
		}
	}
	return (s);
}
