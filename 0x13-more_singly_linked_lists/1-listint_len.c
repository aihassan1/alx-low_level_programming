#include "lists.h"
#include <stdio.h>

/**
* listint_len - Counts the number of elements in a listint_t list.
* @h: Pointer to the head of the list.
*
* Return: The number of nodes.
*/

size_t listint_len(const listint_t *h)
{
const listint_t *ptr = h;
size_t counter = 0;
if (h == NULL)
{
printf("Error\n");
return (1);
}
while (ptr != NULL)
{
ptr = ptr->next;
counter++;
}
return (counter);
}
