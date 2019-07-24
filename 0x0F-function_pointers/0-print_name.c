#include "function_pointers.h"
#include <stdio.h>
/**
  * print_name - calls a function to print a name
  * @name: input name
  * @f: function to print name
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
