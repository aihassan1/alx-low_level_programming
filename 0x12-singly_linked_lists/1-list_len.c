#include "lists.h"
#include <stdio.h>
/**
 * list_len - Counts the number of elements in a linked list.
 * @h: Pointer to the head of the linked list.
 * Return: Number of elements in the linked list.
 */

size_t list_len(const list_t *h)
{
int counter = 0;
const list_t *ptr = h;

while (ptr != NULL)
{

ptr = ptr->next;
counter++;
}
return (counter);
}
