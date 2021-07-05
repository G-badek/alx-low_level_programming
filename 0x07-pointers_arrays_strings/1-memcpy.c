#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - Write a function that copies memory area
 * @dest: Destination of strings
 * @src: source of strings
 * @n: An integer
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *start = dest;
for (i = 0; i < n; i++)
{
*dest++ = *src++;
}
return (start;
}
