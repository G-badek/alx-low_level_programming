#include "holberton.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character in ASCII code
 * Return: Always 1 or 0 (Success)
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
