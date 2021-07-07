#include "holberton.h"
#include <stdio.h>

/**
 * factorial - Factrial of a number
 * @n: Number to calculate
 * Return: Integer (Success)
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 1 || n == 0)
{
return (1);
}
return (factorial(n - 1) * n);
}
