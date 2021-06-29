#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - Reverse a string
 * @s: String to be reversed
 * Return: Reversed String
 */
void rev_string(char *s)
{
char tmp;
int len = 0, i = 0;
while (s[i++])
{
len++;
}
for (i = len - 1; i >= len / 2; i--)
{
tmp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = tmp;
}
}
