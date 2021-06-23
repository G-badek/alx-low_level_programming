#include <stdio.h>

/**
 * main - write a program that finds and prints the sum
 *
 * Return: void
 */
int main(void)
{
int i;
unsigned long a = 0, b = 1, c, res = 0;
for (i = 1; i <= 50; ++i)
{
c = a + b;
if ((c <= 4000000) && ((c % 2) == 0))
{
res += c;
}
a = b;
b = c;
}
printf("%lu\n", res);
return (0);
}
