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
int c = 1;
while (c <= 20365011074)
{
printf("%d, ", c);
a = b;
b = c;
c = a + b;
}
printf("\n");
return (0);
}
