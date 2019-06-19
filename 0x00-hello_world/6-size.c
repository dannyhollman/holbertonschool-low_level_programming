#include <stdio.h>
/**
 * main - Return size of data types
 *
 * Return: always 0(success)
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\nSize of an int: %lu byte(s)\nSize\
of a long int: %lu byte(s)\nSize of a long long int: %lu byte(s)\nSize\
of a float: %lu byte(s)\n",
sizeof(char), sizeof(int), sizeof(long), sizeof(long long), sizeof(float));
return (0);
}
