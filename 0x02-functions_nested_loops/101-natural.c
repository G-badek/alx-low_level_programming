#include "holberton.h"
#include <stdio.h>

/**
 * main - Write a program that computes and prints the sum
 *
 * Return: void
 */
int main(void)
{
int i;
int res = 0;
for (i = 1; i < 1024; i++)
{
if (((i % 3) == 0) || ((i % 5) == 0))
{
res += i;
}
}
printf("%d\n", res);
return (0);
}
