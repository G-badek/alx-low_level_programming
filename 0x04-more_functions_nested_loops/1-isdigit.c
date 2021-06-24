#include "holberton.h"

/**
 * main - Write a function that checks for a digit (0 through 9).
 * @c: An integer
 * Return: Always 0 or 1
 */
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
}
