#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - Print characters in reverse form
 * @s: String of characters
 * Return: Void
 */
void print_rev(char *s)
{
int i = strlen(s) - 1;
while (i < strlen(s))
{
printf("%c", s[i]);
}
printf("\n");
}
