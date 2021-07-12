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
int a, b, res;
a = atoi(argv[1]);
b = atoi(argv[2]);
res = a * b;
printf("%d\n", res);
return (0);
}
