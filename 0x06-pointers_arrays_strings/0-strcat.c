#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - Write a function that concatenates two
 * @src: Source of strings
 * @dest: Where Strings are appended
 * Return: Strings of characters
 */
char *_strcat(char *dest, char *src)
{
int lenD = 0, lenS = 0, i;
while (dest[lenD] != '\0')
{
lenD++;
}
while (src[lenS] != '\0')
{
dest[lenD] = src[lenS];
lenD++
lenS++;
}
dest[lenD] = '\0';
return (dest);
}
