#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints number of element of an array
 * @a: A pointer
 * @n: An integer
 * Return: Void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i == n - 1)
{
printf("\n");
}
else
{
printf(", ");
}
}
}

