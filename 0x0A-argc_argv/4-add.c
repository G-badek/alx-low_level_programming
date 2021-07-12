#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds two positive numbers
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: integer 0 or 1
 */
int main(int argc, char *argv[])
{
int num, digit, sum = 0;
for (num = 1; num < argc; num++)
{
for (digit = 0; argv[num][digit]; digit++)
{
if (argv[num][digit] < '0' || argv[num][digit] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[num]);
}
printf("%d\n", sum);
return (0);
}
