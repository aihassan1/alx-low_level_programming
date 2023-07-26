#include "main.h"

/**
 * reverse_array - Reverses the elements of an integer array.
 * @a: Pointer to the integer array.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
int *start = a;
int *end = a + n - 1;

while (start < end)
{
int temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
