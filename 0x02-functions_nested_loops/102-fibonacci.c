#include <stdio.h>

/**
 * main - Write a program that prints the first 50 Fibonacci no
 *
 * Return: void
 */
int main(void)
{
int a = 0;
int b = 1;
int c = 0;
while (c < 50)
{
a = b;
b = c;
c = a + b;
printf("%d, ", c);
}
printf("\n");
return (0);
}
