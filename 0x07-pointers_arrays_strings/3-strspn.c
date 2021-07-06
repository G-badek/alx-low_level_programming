#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - Write a function that gets the length
 * @s: Initial segments
 * @accept: strings of character
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
int consistC = 0;
int prevC;
while (*s)
{
int i;
int consistC = 0;
int prevC;
while (*s)
{
i = 0;
prevC = consistC;
while (*(accept + i) != '\0')
{
if (*(accept + i) == *s)
consistC++;
i++;
}
if (prevC == consistC)
/* didn't equal a char from accept */
break;
s++;
}
return (consistC);
}
}
