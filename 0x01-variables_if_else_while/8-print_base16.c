#include <stdio.h>

/**
 * main - Entry point
 * No Description:
 * Return: 0 (Success)
 */
int main(void)
{
int x;
for (x = 0; x < 10; x++)
{
putchar(x + '0');
}
for (x = 'a'; x <= 'f'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
