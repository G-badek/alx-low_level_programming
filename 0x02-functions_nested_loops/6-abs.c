#include "holberton.h"
#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer
 * @n: A integer
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
if (n < 0)
{
return (abs(n));
}
else
{
return (n);
}
}
