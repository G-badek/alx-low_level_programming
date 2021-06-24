#include "holberton"

/**
 * print_line - Write a function that draws a straight line
 * @n: An integer
 * Return: void
 */
void print_line(int n)
{
if (n <= 0){
_putchar('\n');
}
else
{
int i;
for (i = 0; i < n; i++)
{
_putchar(95);
}
_putchar('\n');
}
}
