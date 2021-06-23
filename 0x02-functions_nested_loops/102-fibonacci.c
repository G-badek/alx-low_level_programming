#include <stdio.h>

/**
 * main - Write a program that prints the first 50 Fibonacci no
 *
 * Return: void
 */
int main(void)
{
int i;
int a = 0;
int b = 1;
int c = 0;
for (i = 1; i <= 50; ++i) {
printf("%d, ", c);
a = b;
b = c;
c = a + b;
}
printf("\n");
return (0);
}
