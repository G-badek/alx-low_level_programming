#include "holberton.h"

/**
 * _islower - checks for lowecase character
 *
 * Return: Always 0 or 1 (Success)
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
