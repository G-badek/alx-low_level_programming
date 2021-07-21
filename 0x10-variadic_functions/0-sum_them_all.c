#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its integers
 * @n: number of integer arguments
 *
 * Return: integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i, sum;
i = sum = 0;
va_start(args, n);
while (i < n)
{
sum += va_arg(args, int);
i++;
}
va_end(args);
return (sum);
}
