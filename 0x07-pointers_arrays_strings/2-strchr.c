#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - Write a function that locates a characte
 * @s: strings of character
 * @c: Characters
 * Return: pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (*(s + i))
{
if (*(s + i) == c)
{
return (*(s + i));
i++;
}
}
if (*(s + i))
{
return (*(s + i));
}
return (NULL);
}
