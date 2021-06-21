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
if (((c != a) || (b != z)) && ((b + (c * 10)) < (z + (a * 10))))
{
putchar(w + '0');
putchar(x + '0');
putchar(' ');
putchar(y + '0');
putchar(z + '0');
if ((c != '9') || (b != '8') || (a != '9') || (z != '9'))
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
