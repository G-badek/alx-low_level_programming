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
int j = 0, i = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
