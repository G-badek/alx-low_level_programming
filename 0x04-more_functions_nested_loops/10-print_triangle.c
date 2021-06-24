#include <stdio.h>
#include "holberton.h"

/**
 * print_triangle - Write a function that prints a triangle, followed by a new line.
 * @size: Size of triangle
 * Return: void (Success)
 */
void print_triangle(int size)
{
if (size < 1)
{
_putchar('\n');
}
else
{
int i;
int j;
int k;
for (i = 1; i <= size; i++)
{
for (k = i; k < size; k++)
{
_putchar(32);
}
for(j = 1; j <= i; j++)
{
_putchar(35);
}
 _putchar('\n');
}
_putchar('\n');
}
}
