#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - entry point of calc program
  * @argc: number of arguments
  * @argv: array of arguments
  * Return: 0 if successful
  */
int main(int argc, char *argv[])
{
	int num1, num2, value;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
	{
		if (strcmp(argv[3], "0") == 0)
		{
			printf("Error\n");
			exit(100);
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	value = (get_op_func(argv[2])(num1, num2));

	if (value == 0)
		exit(99);

	printf("%d\n",  value);

	return (0);
}
