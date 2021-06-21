#include <stdio.h>

/**
 * main - Entry Point
 * No Description
 * Return: 0 (Success)
 */
int main(void)
{
int x;
int y;
for (x = 0; x < 10; x++)
{
for (y = x + 1; y < 10; y++)
{
putchar(x + '0');
putchar(y + '0');
if (y < 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
