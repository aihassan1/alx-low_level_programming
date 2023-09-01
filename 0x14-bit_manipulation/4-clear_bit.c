#include "main.h"
#include <stdio.h>
/**
* clear_bit - Clears a bit at a given index in a number
* @n: Pointer to the number
* @index: The index of the bit to clear
*
* Return: 1 if successful, -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long) * 8)
return (-1);

*n = *n & (~(1 << index));
return (1);
}
