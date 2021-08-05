#include "main.h"

/**
 * flip_bits - returns the number of bits
 * @n: number
 * @m: number
 * Return: counter
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int count = 0, aux;
aux = n ^ m;
while (aux)
{
if ((aux & 1) == 1)
{
count++;
}
aux >>= 1;
}
return (count);
}
