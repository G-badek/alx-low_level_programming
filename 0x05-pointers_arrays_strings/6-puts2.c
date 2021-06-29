#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: String of characters
 * Return: Always void
 */
void puts2(char *str)
{
int len = 0, i = 0;
while (str[len])
{
len++;
}
for (i = 0; i < len; i += 2)
{
_putchar(s[i]);
}
_putchar('\n');
}
