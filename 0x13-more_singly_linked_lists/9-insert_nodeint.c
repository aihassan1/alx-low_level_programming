#include "lists.h"
#include <stdlib.h>
#include <stdlib.h>

/**
* insert_nodeint_at_index - Inserts a new node
* at a given position in a listint_t list.
* @head: Pointer to a pointer to the head of the list.
* @idx: Index at which the new node should be inserted.
* @n: Value to store in the new node.
*
* Return: Address of the new node, or NULL on failure.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int counter = 0;
listint_t *new;
listint_t *ptr = *head;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

while (counter < idx)
{
if (ptr == NULL)
{
free(new);
return (NULL);
}
ptr = ptr->next;
counter++;
}
new->n = n;
new->next = ptr->next;
ptr->next = new;
return (new);
}
