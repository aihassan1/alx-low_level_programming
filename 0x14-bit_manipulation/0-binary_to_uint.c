#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - Converts a binary string to an unsigned integer.
* @b: The binary string to convert.
*
* Return: The unsigned integer result of the conversion, or 0 if b is NULL or
*         contains non-binary characters.
*/

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int num = 0;

if (b == NULL)
return (0);

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
	return (0);

num = num * 2 + (b[i] - '0');

}
return (num);

}
