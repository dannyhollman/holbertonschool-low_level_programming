#include <stdio.h>
#include <unistd.h>
/**
 *main - Print string
 *
 *Return: always 1(success)
 */
int main(void)
{
char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(2, "and that piece of art is useful\" - \
Dora Korpar, 2015-10-19\n", sizeof(s));
return (1);
}
