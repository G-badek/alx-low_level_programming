#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - Print characters in reverse form
 * @s: String of characters
 * Return: Void
 */
void print_rev(char *s)
{
int len = 0, i;
while (s[len])
{
len++;
}
for (i = len - 1; i >= 0; i++)
{
printf("%c", s[i]);
}
}
printf("\n");
}
