#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creats an array of chars
 * @size: size of char
 * @c: char itself
 * Return: a pointer to the array, of Null if it fails
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
if (size == 0)
{
return (NULL);
}
str = malloc(sizeof(char) * size);
if (str == NULL)
{
return (NULL);
}
i = 0;
while (i < size)
{
str[i] = c;
i++;
}
return (str);
}
