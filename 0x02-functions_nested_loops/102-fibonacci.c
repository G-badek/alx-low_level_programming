#include <stdio.h>

/**
 * main - Write a program that prints the first 50 Fibonacci no
 *
 * Return: void
 */
int main(void)
{
int i;
unsigned long a = 0, b = 1, c;
for (i = 1; i <= 50; ++i)
{
c = a + b;
printf("%lu", c);
a = b;
b = c;
if (i == 50)
{
printf("\n");
}
else
{
printf(", ");
}
}
return (0);
}
