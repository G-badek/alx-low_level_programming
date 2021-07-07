#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - Length of strings
 * @s: Strings of characters
 * Return: Integers 
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (_strlen_recursion(s + 1) + 1);
}
