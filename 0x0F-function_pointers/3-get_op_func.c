#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
/**
  * get_op_func - determiens what operator was passed in
  * and calls the relevant function
  * @s: pointer to operator
  * Return: pointer to function
  */
int (*get_op_func(char *s))(int x, int y)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
	}
	return (NULL);
}
