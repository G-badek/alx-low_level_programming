#include "holberton.h"
#include <stdio.h>

/**
 * main - Multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc <= 2)
{
printf("Error\n");
return (1);
}
int i = 1;
while (--argc)
{
i *= *argv++;
printf("%d\n", i);
}
return (0);
}
