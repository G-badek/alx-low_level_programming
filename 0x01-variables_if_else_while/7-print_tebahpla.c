#include <stdio.h>

/**
 * main - Entry Point
 * 
 * Return: 0 (Success)
 */
int main(void)
{
int x;
for (x = 'z'; x >= 'a'; x--)
{
putchar(x);
}
putchar('\n');
return(0);
}
