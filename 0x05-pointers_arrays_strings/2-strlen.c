#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: A set of character
 * Return: Always integer (Success)
 */
int _strlen(char *s)
{
int l = 0;
while(s[l] != '\0')
{
l++;
}
return (l);
}
