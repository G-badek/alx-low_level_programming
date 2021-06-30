#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - Copies string
 * @dest: Where the string is copied
 * @src: Source of Strings
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i++] = '\0';
return (dest);
}