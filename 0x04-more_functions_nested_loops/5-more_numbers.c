#include "holberton.h"

/**
 * more_numbers - Write a function that prints 10 
 *
 * Return: void
 */
void more_numbers(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
