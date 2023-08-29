#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The value to store in the new node.
 *
 * Return: A pointer to the head of the linked list.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr;

listint_t *new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (*head);
}

ptr = *head;
while (ptr->next != NULL)
{

ptr = ptr->next;
}
ptr->next = new;

return (*head);
}
