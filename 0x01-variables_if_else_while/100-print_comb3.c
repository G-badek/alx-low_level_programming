#include <stdio.h>

/**
 * main - Entry Point
 * No Description
 * return: 0 (success)
 */
int main(void)
{
int x;
int y;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
putchar(x);
putchar(y);
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
