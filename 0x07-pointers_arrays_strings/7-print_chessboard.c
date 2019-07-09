#include "holberton.h"
/**
  * print_chessboard - prints chessboard
  * @a: board input
  * Return: void
  */
void print_chessboard(char (*a)[8])
{
	int loop1 = 0, loop2 = 0;

	while (a[loop1][loop2])
	{
		while (loop2 < 8)
		{
			_putchar(a[loop1][loop2]);
			loop2++;
		}
		_putchar('\n');
		loop2 = 0;
		loop1++;
	}
}
