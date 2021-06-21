#include <stdio.h>

/**
 * main - Entry Point
 * No Description
 * Return: 0 (Success)
 */
int main(void)
{
int x;
for (x = 0; x < 10; x++)
{
putchar(x + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
