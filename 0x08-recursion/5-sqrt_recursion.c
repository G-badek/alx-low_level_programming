#include "holberton.h"
#include <stdio.h>

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 * Return: If the number has a natural square root - the square root.
 */

int find_sqrt(int num, int root)
{
if ((root * root) == num)
{
return (root);
}
if (root == num / 2)
{
return (-1);
}
return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Square root recursion
 * @n: Integer to solve
 * Return: Integer
 */
int _sqrt_recursion(int n)
{
int root = 0;
if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
return (find_sqrt(n, root));
}
