#include "main.h"
#include <stdio.h>
/**
* flip_bits - Counts the number of bits
* to flip to convert one number to another
* @n: The first number
* @m: The second number
*
* Return: The number of bits to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int counter = 0;
unsigned long int xor_result = n ^ m;

while (xor_result != 0)
{
if (xor_result & 1)
counter++;

xor_result = xor_result >> 1;
}
return (counter);
}
