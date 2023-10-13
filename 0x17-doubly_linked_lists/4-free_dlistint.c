#include "lists.h"

/**
* free_dlistint - Frees a doubly linked list.
* @head: A pointer to the head of the doubly linked list.
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp = head;
dlistint_t *next;

while (temp != NULL)
{
next = temp->next;
free(temp);
temp = next;
}
}
