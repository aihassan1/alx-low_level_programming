#include "main.h"
#include <stdio.h>
/**
* get_bit - Returns the value of a bit at a given index
* @n: The number to check
* @index: The index of the bit to get
*
* Return: The value of the bit at the given index, or -1 if an error occurred
*/

int get_bit(unsigned long int n, unsigned int index)
{
int x;
if (index >= sizeof(unsigned long int) * 8)
return (-1);

x = (n & (1 << index) ? 1 : 0);
return (x);
}
