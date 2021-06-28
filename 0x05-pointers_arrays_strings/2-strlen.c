#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: A set of character
 * Return: Always integer (Success)
 */
int _strlen(char *s)
{
int len = 0;
while(*s[len] != '\0')
{
len++;
}
return (len);
}
