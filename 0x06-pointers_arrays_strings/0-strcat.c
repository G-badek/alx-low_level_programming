#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - Write a function that concatenates two strings
 * @src: Source of strings
 * @dest: Where Strings are appended
 * Return: Strings of characters
 */
char *_strcat(char *dest, char *src)
{
int lenD = 0, lenS = 0, i;
while (dest[lenD])
{
lenD++;
}
while (src[lenS])
{
lenS++;
}
for (i = 0; i < lenS; i++)
{
dest[lenD + i] = src[i];
}
dest[lenD + i++] = src[i++];
return (dest);
}
