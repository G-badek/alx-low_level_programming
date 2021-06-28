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
int length, c;
char *begin, *end, temp;
length = _strlen(s);
begin = s;
end = s;
for (c = 0; c < length - 1; c++ )
{
end++;
for (c = 0; c < length / 2; c++)
{
temp = *begin;
*begin = *end;
*end = temp;
begin++;
end--;
}
}
printf("\n");
}
