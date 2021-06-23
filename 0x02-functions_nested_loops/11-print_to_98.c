#include "holberton.h"

/**
 * print_to_98 - Prints all natural numbers to 98
 * @n: An integer
 * Return: A list of numbers (Success)
 */
void print_to_98(int n)
{
int i;
int j = 99 - n;
if(j >= 0)
{
for (i = n; i < j; i++)
{
_putchar(n);
_putchar(',');
_putchar(' ');
}
}
else
{
for (i = n; i > j; i--)
{
_putchar(n);
_putchar(',');
_putchar(' ');
} 
}
}
