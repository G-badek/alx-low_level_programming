#include "function_pointers"
#include <stdio.h>

/**
 * array_iterator - Execute a function given as a parameter on each element
 * @array: array with elements
 * @size: size of array
 * @action: function pointer that executes function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
