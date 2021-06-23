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
int i = 0;
while (i < 50)
{
i++;
a = b;
b = c;
c = a + b;
printf("%d, ", c);
}
printf("\n");
return (0);
}
