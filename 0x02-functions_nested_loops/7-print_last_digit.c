#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n : An integer
 * Return: Always an integer (Success)
 */
int print_last_digit(int n)
{
int i = (n % 10);
if (i < 0)
{
_putchar(-i + '0');
return (-i);
}
else
{
_putchar(i + '0');
return (i);
}
}
