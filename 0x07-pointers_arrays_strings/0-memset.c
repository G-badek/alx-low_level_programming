#include "holberton.h"
#include <stdio.h>

/**
 * memset - Write a function that fills memory.
 * @s: strings of character
 * @b: strings of character
 * @n: an integer
 * Return: A poin<F11>ter to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *memory = s;
for (i = 0; i < n; i++)
{
*s++ = b;
}
return (memory);
}
