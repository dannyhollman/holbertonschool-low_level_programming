#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = rand();
if (n > 0)
{
printf("%i is positive", n);
else if (n == 0)
printf("%i is zero", n);
else
printf("%i is negative", n);
}
return (0);
}
