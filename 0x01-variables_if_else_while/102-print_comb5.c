#include <stdio.h>

/**
 * main - Entry Point
 * No Description:
 * Return: 0 (Success)
 */
int main(void)
{
int w;
int x;
int y;
int z;
for (w = 0; w < 10; w++)
{
for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
for (z = 0; z < 10; z++)
{
if (((w != y) || (x != z)) && ((x + (w * 10)) < (z + (y * 10))))
{
putchar(w + '0');
putchar(x + '0');
putchar(' ');
putchar(y + '0');
putchar(z + '0');
if ((w + x) < 17 || (w < x))
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
