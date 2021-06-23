#include <stdio.h>

/**
 * main - Write a program that prints the first 50 Fibonacci no
 *
 * Return: void
 */
int main(void)
{
int a = 1;
int b = 1;
int c = 1;
int i = 0;
while (i < 50)
{
a = b;
b = c;
c = a + b;
printf("%d, ", c);
i++;
}
printf("\n");
return (0);
}
