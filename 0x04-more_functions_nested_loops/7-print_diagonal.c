#include "holberton.h"

/**
 * print_diagonal - Write a function that draws a diagonal line on the terminal.
 * @n: An integer
 * Return: void
 */
void print_diagonal(int n)
{
if (n < 1)
{
_putchar('\n');
}
else
{
int i;
int j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar();
}
_putchar(\);
_putchar('\n');
}
}
}
