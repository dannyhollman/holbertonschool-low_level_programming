#include <string.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char alphabet[]="abcdefghijklmnopqrstuvwxyz";
	for (i = 0;i < 26;i++)
	{
		printf("%c", alphabet[i]);
	}
	printf("\n");
	return 0;
}
