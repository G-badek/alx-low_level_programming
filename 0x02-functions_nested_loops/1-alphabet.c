#include "holberton.h"

/**
 * print_alphabet - prints the alphabets in lowercase.
 *
 * Return: void
 */
void print_alphabet(void)
{
int i;
for (i = 'a', i <= 'z', i++)
{
_putchar(i);
}
_putchar('\n');
return (0);
}
