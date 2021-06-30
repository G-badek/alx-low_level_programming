#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - Write a function that concatenates two strings
 * @dest: Array of appended Strings
 * @src: Source of Strings
 * @n: An integer
 * Return: Characters of strings
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
