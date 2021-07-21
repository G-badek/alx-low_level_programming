#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches for an integer in an array of integers
 * @array: The array of integers
 * @size: The size of the array
 * @cmp: A pointer to the to compare values
 * Return: Always (integer)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int index;
if (array == NULL || cmp == NULL)
{
return (-1);
}
for (index = 0; index < size; index++)
{
if (cmp(array[index]) != 0)
{
return (index);
}
}
}
