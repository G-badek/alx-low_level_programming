#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n : An integer
 * Return: Always an integer (Success)
 */
int print_last_digit(int n)
{
int i;
if (n < 0)
{
i = ((-1 * n) % 10);
_putchar(-i + '0');
return (i);
}
else
{
i = (n % 10);
_putchar(i + '0');
return (i);
}
}
