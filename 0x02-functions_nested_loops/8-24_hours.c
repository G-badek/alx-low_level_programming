#include "holberton.h"

/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
int w, x, y, z;
for (w = 0; w < 3; w++)
{
for (x = 0; x < 4; x++)
{
for (y = 0; y < 6; y++)
{
for (z = 0; z < 10; z++)
{
_putchar(w);
_putchar(x);
_putchar(':');
_putchar(y);
_putchar(z);
}
}
}
}
}
