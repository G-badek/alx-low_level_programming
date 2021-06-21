#include <stdio.h>

/**
 * main - Entry Point
 * No Description:
 * Return: 0 (Success)
 */
int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
int y;
for (y = 'A'; y <= 'Z'; y++)
{
  putchar(y);
}
putchar('\n');
return (0);
}
