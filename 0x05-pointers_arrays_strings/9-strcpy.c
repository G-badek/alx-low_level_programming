#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - Copies string
 * @dest: Where the string is copied
 * @src: Source of Strings
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
return (dest);
}
