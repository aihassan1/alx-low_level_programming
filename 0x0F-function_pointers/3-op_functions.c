#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>

/**
* op_add - Adds two integers
* @a: The first integer
* @b: The second integer
*
* Return: The sum of 'a' and 'b'
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - Subract two integers
* @a: The first integer
* @b: The second integer
*
* Return: The diffrecne between 'a' and 'b'
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - Returns the product of two integers.
* @a: The first integer.
* @b: The second integer.
*
* Return: The product of 'a' and 'b'.
*/
int op_mul(int a, int b)
{
return (a * b);
}


/**
* op_div - Returns the result of dividing one integer by another.
* @a: The numerator.
* @b: The denominator (must be non-zero).
*
* Return: The result of the division of 'a' by 'b'.
*            100 in case of failure
*/

int op_div(int a, int b)
{
if (b != 0)
{
return (a / b);
}
else
{
printf("Error\n");
return (100);
}
}

/**
* op_mod - Returns the remainder of the division of one integer by another.
* @a: The dividend.
* @b: The divisor (must be non-zero).
*
* Return: The remainder of the division of 'a' by 'b'.
*         100 in case of failure
*/
int op_mod(int a, int b)
{
if (b != 0)
{
return (a % b);
}
else
{
printf("Error\n");
return (100);
}
}
