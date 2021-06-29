#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of string
 * @pointer: A string of characters
 * Return: An integer
 */
int _strlen(char *pointer)
{
int i = 0;
while (*(pointer + i) != '\0')
{
i++;
}
return (i);
}

/**
 * print_rev - Print characters in reverse form
 * @s: String of characters
 * Return: Void
 */
void print_rev(char *s)
{
int c = _strlen(s), i, lind, rind;
char temp;
lind = 0;
rind = c - 1;
for (i = lind; i < rind; i++)
{
temp = s[i];
s[i] = s[rind];
s[rind] = temp;
rind--;
}
printf("\n");
}
