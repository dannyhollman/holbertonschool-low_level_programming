#include <stdio.h>
/**
 *main - Print string
 *
 *Return: always 0(success)
 */
int main(void)
{
char *s="and that piece of art is useful\" - Dora Korpar, 2015-10-19";
while(*s){ 
  putchar(*s++);
}
putchar('\n');
return (0);
}
