#include "holberton.h"

/**
 * print_to_98 - Prints all natural numbers to 98
 * @n: An integer
 * Return: A list of numbers (Success)
 */
void print_to_98(int n)
{
if (n > 98)
{
for (; n > 98; n--)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
}
else if (n < 98)
{
for (; n < 98; n++)
{
_putchar(n);
_putchar(',');
_putchar(' ');
}
}
else
{
putchar(n);
}
}
