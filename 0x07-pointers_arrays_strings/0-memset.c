#include "holberton.h"
#include <stdio.h>

/**
 * _memset - Write a function that fills memory with a constant byte.
 * @s: strings of character
 * @b: strings of character
 * @n: an integer
 * Return: A poimter to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int index;
unsigned char *memory = s, value = c;
for (index = 0; index < n; index++)
{
memory[index] = value;
}
return (memory);
}
