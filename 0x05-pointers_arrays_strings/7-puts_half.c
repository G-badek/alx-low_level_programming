#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - prints half of the string
 * @str: String of characters
 * Return: Void
 */
void puts_half(char *str)
{
int len = 0, i = 0;
while (str[len])
{
len++;
}
if (len % 2 == 0)
{
for (i = len / 2; i < len; i++)
{
printf("%c", str[i]);
}
}
else
{
for (i = (len - 2) / 2; i < len; i++)
{
printf("%c", str[i]);
}
}
printf("\n");
}
