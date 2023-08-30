#include "lists.h"
#include <stdlib.h>
#include <stdlib.h>

/**
* delete_nodeint_at_index - Deletes the node at a given index in a linked list
* @head: Pointer to the head of the linked list
* @index: Index of the node to be deleted
*
* Return: 1 if successful, -1 otherwise
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int counter = 0;
listint_t *ptr = *head;
listint_t *temp;

if (*head == NULL)
return (-1);

if (index == 0)
{

temp = *head;
*head = (*head)->next;
free(temp);

return (1);
}

while (ptr != NULL && counter < index)
{
temp = ptr;
ptr = ptr->next;
counter++;
}

if (ptr != NULL)
{
temp->next = ptr->next;
free(ptr);
return (1);
}
return (-1);
}
