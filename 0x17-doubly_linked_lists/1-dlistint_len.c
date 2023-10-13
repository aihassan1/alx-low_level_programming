#include "lists.h"

/**
* dlistint_len - returns the number of elements in a doubly linked list
* @h: A pointer to the head of the doubly linked list
*
* Return: The number of elements in the list
*/

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *temp;
int nodes_counter = 0;
temp = h;

while (temp != NULL)
{
temp = temp->next;
nodes_counter++;
}
return (nodes_counter);
}
