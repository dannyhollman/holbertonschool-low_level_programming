#include "holberton.h"
/**
 * main - Print alphabet x10
 *
 * Return: always 0
 */
int print_alphabet_x10(void)
{
        char letter;

        int i;

        for (i = 0; i < 10; i++)
        {
                for (letter = 'a'; letter <= 'z'; letter++)
                {
                        _putchar(letter);
                }
		_putchar('\n');
        }
        return (0);
}
