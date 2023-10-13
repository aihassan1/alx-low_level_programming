#include "lists.h"
/**
* delete_dnodeint_at_index - Deletes a node at a specific index.
* @head: A pointer to a pointer to the head of the doubly linked list.
* @index: The index of the node to delete.
*
* Return: 1 if successful, -1 if the node is not found or there's an error.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp;
dlistint_t *node;
dlistint_t *the_node_after;
dlistint_t *the_node_before;
temp = *head;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
	(*head)->prev = NULL;
free(temp);
return (1);
}

node = get_dnodeint_at_index(*head, index);
if (node == NULL)
return (-1);

if (node->next == NULL)
{
the_node_before = node->prev;
the_node_before->next = NULL;
free(node);
return (1);
}

the_node_before = node->prev;
the_node_before->next = node->next;

the_node_after = node->next;
the_node_after->prev = node->prev;

free(node);
return (1);


}




/**
* get_dnodeint_at_index - Retrieves a node at a specific
* index in a doubly linked list.
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
