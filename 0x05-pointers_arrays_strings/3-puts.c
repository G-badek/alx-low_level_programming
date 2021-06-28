#include "holberton.h"
#include <stdio.h>

/**
 * _puts - Prints a long string of characters
 * @str: Characters to be printed
 * Return: Void
 */
void _puts(char *str)
{
int l = 0;
while (str[l] != '\0')
{
printf("%c", str[l]);
l++;
}
printf("\n");
}
