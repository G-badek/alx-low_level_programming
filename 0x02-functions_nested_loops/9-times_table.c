#include "holberton.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
int x, y, z;
for (x = 0; x < 10; x++)
{
_putchar(0);
for (y = 0; y < 10; y++)
{
_putchar(',');
_putchar(' ');
z = x * y;
if (z < 10)
{
_putchar(' ');
_putchar(z + '0');
}
else
{
_putchar(z);
}
}
}
}
