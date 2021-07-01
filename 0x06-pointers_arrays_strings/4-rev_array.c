#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: A pointer to an integer
 * @n: Number of elements of the array
 * Return: Void
 */
void reverse_array(int *a, int n)
{
int i = 0, tmp;
while (i < n--)
{
tmp = a[i];
a[i] = a[n];
a[n] = tmp;
i++;
}
}
