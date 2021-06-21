#include <stdio.h>

/**
 * main - Entry point
 * No Description:
 * Return: 0 (success)
 */
int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
if (x == 'q' || x == 'e')
{
continue;
}
putchar(x);
}
putchar('\n');
return (0);
}
