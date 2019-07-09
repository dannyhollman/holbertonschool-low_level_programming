#include "holberton.h"
/**
  *
  *
  *
  */
char *_strchr(char *s, char c)
{
	char *loop = s;
	
	char *nope = "NULL";

	while (*loop)
	{
		if (*loop == c)
			return (loop);
		loop++;
	}
	return (nope);
}
