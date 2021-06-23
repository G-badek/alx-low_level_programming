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
for (x = 0; x < 10; x++)
{
for (y = 0; y < 6; y++)
{
for (z = 0; z < 10; z++)
{
if(w > 2 && x > 3)
{
break;
}
_putchar(w + '0');
_putchar(x + '0');
_putchar(':');
_putchar(y + '0');
_putchar(z + '0');
_putchar('\n');
}
}
}
}
}
