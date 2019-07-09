#include "holberton.h"
/**
  *
  *
  *
  */
unsigned int _strspn(char *s, char *accept)
{
	int loop = 0, loop2 = 0, next = 0;

	unsigned int total = 0;

	while (s[loop])
	{
		while (accept[loop2])
		{
			if (s[loop] == accept[loop2])
			{	
				total += 1;
			}
			if (s[loop + 1] == accept[loop2])
			{
				next = 1;
			}
			loop2++;
		}
		if (next != 1)
			break;
		else
			next = 0;
		loop2 = 0;
		loop++;
	}
	return (total);
}
