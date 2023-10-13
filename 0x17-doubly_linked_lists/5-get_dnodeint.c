#include "lists.h"
/**
* get_dnodeint_at_index - Retrieves a node
* at a specific index in a doubly linked list.
* @head: A pointer to the head of the doubly linked list.
* @index: The index of the node to retrieve.
*
* Return: A pointer to the node at the specified index, or NULL if not found.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp = NULL;
unsigned int counter = 0;

if (head == NULL)
return (NULL);

temp = head;

while (temp != NULL)
{
if (counter == index)
return (temp);
else if (temp == NULL)
return (NULL);

temp = temp->next;
counter++;
}
return (NULL);
}
