#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - Reverse a string
 * @s: String to be reversed
 * Return: Reversed String
 */
void rev_string(char *s)
{
int len = 0, i;
while (s[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
s[i] = s[len - i];
}
}