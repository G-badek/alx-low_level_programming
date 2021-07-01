#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - Write a function that encodes a string
 * @a: Strings of characters
 * Return: Encoded Strings
 */
char *rot13(char *a)
{
int i, j;
char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; s1[j] != '\0'; j++)
{
if (s1[j] == a[i])
{
a[i] = s2[j];
break;
}
}
}
return (a);
}
