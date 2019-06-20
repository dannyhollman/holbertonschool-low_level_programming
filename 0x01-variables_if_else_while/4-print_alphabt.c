#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter[] = "abcdfghijklmnoprstuvwxyz";

	int arraySize = strlen(letter);

	int i;

	for (i = 0; i < arraySize; i++)
	{
		putchar(letter[i]);
	}
	putchar('\n');
	return (0);
}
