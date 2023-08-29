#include <stdio.h>
#include "lists.h"

/**
* print_listint - Prints all the elements of a listint_t list.
* @h: Pointer to the head of the list.
*
* Return: The number of nodes.
*/

size_t print_listint(const listint_t *h)
{
size_t counter = 0;
const listint_t *ptr;
ptr = h;
if (h == NULL)
{
return (1);
}

while (ptr != NULL)
{
printf("%d\n", ptr->n);
ptr = ptr->next;
counter++;
}
return (counter);
}
