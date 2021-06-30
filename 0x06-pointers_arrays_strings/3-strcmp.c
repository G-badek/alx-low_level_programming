#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - Write a function that compares two strin
 * @s1: Array of strings
 * @s2: Array of strings
 * Return: Always integer (Success)
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, dif;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] == s2[i])
{
continue;
}
else
{
dif = s1[i] - s2[i];
return (dif);
}
i++
}
return (0);
}
