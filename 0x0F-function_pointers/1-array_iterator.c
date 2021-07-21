#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Execute a function given as a parameter on each element
 * @array: array with elements
 * @size: size of array
 * @action: function pointer that executes function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
{
return;
}
while (size-- > 0)
{
action(*array);
array++;
}
}
