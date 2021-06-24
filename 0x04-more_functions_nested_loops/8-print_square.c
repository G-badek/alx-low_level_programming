#include "holberton.h"

/**
 * print_square - Write a function that prints a square, followed by a new line.
 * @size: An integer
 * Return: void
 */
void print_square(int size)
{
if (size < 1)
{
_putchar('\n');
}
else
{
int i = 0;
int j = 0;
while (i < size)
{
while (j < size)
{
_putchar(35);
j++;
}
i++;
}
_putchar('\n');
}
}
