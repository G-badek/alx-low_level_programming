#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: integer 0 or 1
 */
int main(int argc, char *argv[])
{
int a, b, res;
if (argc <= 2)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
res = a * b;
printf("%d\n", res);
return (0);
}
