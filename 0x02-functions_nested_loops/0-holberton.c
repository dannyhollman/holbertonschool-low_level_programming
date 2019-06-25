#include "holberton.h"
/**
* main - Print Holberton
*
* Return: Always 0.
*/
int main(void)
{
	int i = 0;

	char holberton[] = "Holberton";

	while (holberton[i] != '\0')
	{
		_putchar(holberton[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
